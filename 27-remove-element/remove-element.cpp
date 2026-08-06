#include <vector>

class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
        int index = 0; // Pointer to track the position for non-val elements
        
        for (int i = 0; i < nums.size(); i++) {
            // If current element is not the target value
            if (nums[i] != val) {
                nums[index] = nums[i]; // Move it to the front
                index++; // Move the pointer forward
            }
        }
        
        return index; // Return the number of elements not equal to val
    }
};