#include <iostream>
#include <stack>
#include <string>
#include <cctype>

using namespace std;

// Function to check if a character is an operator
bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

// Function to perform arithmetic operations
double applyOp(double a, double b, char op) {
    switch(op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;
        default: return 0;
    }
}

// Function to evaluate the expression
double evaluateExpression(const string& expr) {
    stack<double> values;
    stack<char> ops;

    for (size_t i = 0; i < expr.length(); ++i) {
        if (expr[i] == ' ')
            continue;
        else if (expr[i] == '(')
            ops.push(expr[i]);
        else if (isdigit(expr[i])) {
            double val = 0;
            while (i < expr.length() && isdigit(expr[i]))
                val = val * 10 + (expr[i++] - '0');
            --i;
            values.push(val);
        } else if (expr[i] == ')') {
            while (!ops.empty() && ops.top() != '(') {
                double val2 = values.top();
                values.pop();
                double val1 = values.top();
                values.pop();
                char op = ops.top();
                ops.pop();
                values.push(applyOp(val1, val2, op));
            }
            ops.pop(); // Remove '(' from stack
        } else if (isOperator(expr[i])) {
            while (!ops.empty() && ((ops.top() != '(') && (expr[i] != '*' && expr[i] != '/') || 
                    (expr[i] == '+' || expr[i] == '-') && (ops.top() == '+' || ops.top() == '-'))) {
                double val2 = values.top();
                values.pop();
                double val1 = values.top();
                values.pop();
                char op = ops.top();
                ops.pop();
                values.push(applyOp(val1, val2, op));
            }
            ops.push(expr[i]);
        }
    }

    while (!ops.empty()) {
        double val2 = values.top();
        values.pop();
        double val1 = values.top();
        values.pop();
        char op = ops.top();
        ops.pop();
        values.push(applyOp(val1, val2, op));
    }

    return values.top();
}

int main() {
    string expression;
    cout << "Enter the expression: ";
    getline(cin, expression);
    double result = evaluateExpression(expression);
    cout << "Result: " << result << endl;
    return 0;
}
