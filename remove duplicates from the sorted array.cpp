#include <iostream>
#include <vector>

using namespace std;

// Function to remove duplicates from a sorted array
vector<int> removeDuplicates(vector<int>& nums) {
    // If the array is empty or has only one element, no duplicates to remove
    if (nums.size() <= 1)
        return nums;

    // Index to keep track of unique elements
    int index = 0;

    // Traverse the array
    for (int i = 1; i < nums.size(); ++i) {
        // If the current element is different from the previous unique element, update the unique element
        if (nums[i] != nums[index]) {
            index++;
            nums[index] = nums[i];
        }
    }

    // Resize the vector to remove duplicates
    nums.resize(index + 1);

    return nums;
}

int main() {
    // Input sorted array with duplicates
    vector<int> nums = {1, 1, 2, 3, 3, 4, 4, 5, 5, 5};

    cout << "Original sorted array with duplicates: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    // Remove duplicates
    nums = removeDuplicates(nums);

    cout << "Array after removing duplicates: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
