#include <iostream>

// Function to move disks from source pole to destination pole
void towerOfHanoi(int n, char source, char destination, char auxiliary) {
    if (n == 1) {
        std::cout << "Move disk 1 from " << source << " to " << destination << std::endl;
        return;
    }
    towerOfHanoi(n - 1, source, auxiliary, destination);
    std::cout << "Move disk " << n << " from " << source << " to " << destination << std::endl;
    towerOfHanoi(n - 1, auxiliary, destination, source);
}

int main() {
    int n;
    std::cout << "Enter the number of disks: ";
    std::cin >> n;

    // Towers are labeled as A, B, and C
    towerOfHanoi(n, 'A', 'C', 'B');

    return 0;
}
