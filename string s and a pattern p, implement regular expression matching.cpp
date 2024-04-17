#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isMatch(string s, string p) {
    int m = s.length();
    int n = p.length();

    // Create a 2D DP table
    vector<vector<bool>> dp(m + 1, vector<bool>(n + 1, false));

    // Empty pattern matches empty string
    dp[0][0] = true;

    // Handle patterns with *
    for (int j = 1; j <= n; ++j) {
        if (p[j - 1] == '*') {
            dp[0][j] = dp[0][j - 2];
        }
    }

    // Fill DP table
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (s[i - 1] == p[j - 1] || p[j - 1] == '.') {
                dp[i][j] = dp[i - 1][j - 1];
            } else if (p[j - 1] == '*') {
                dp[i][j] = dp[i][j - 2] || (dp[i - 1][j] && (s[i - 1] == p[j - 2] || p[j - 2] == '.'));
            }
        }
    }

    return dp[m][n];
}

int main() {
    string s = "aa";
    string p = "a";
    cout << "Input: s = \"" << s << "\", p = \"" << p << "\"" << endl;
    cout << "Output: " << (isMatch(s, p) ? "true" : "false") << endl;
    return 0;
}
