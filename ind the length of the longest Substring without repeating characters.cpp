#include <iostream>
#include <unordered_set>

using namespace std;

int lengthOfLongestSubstring(string s) {
    unordered_set<char> seen;
    int maxLength = 0;
    int left = 0;

    for (int right = 0; right < s.length(); ++right) {
        char currentChar = s[right];
        
        while (seen.find(currentChar) != seen.end()) {
            seen.erase(s[left]);
            ++left;
        }
        
        seen.insert(currentChar);
        maxLength = max(maxLength, right - left + 1);
    }

    return maxLength;
}

int main() {
    string s = "abcabcbb";
    cout << "Length of the longest substring without repeating characters: " << lengthOfLongestSubstring(s) << endl;
    return 0;
}
