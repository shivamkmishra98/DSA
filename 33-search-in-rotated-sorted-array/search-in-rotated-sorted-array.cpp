#include <vector>

class Solution {
public:
    int search(std::vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            // If target is found, return its index immediately
            if (nums[mid] == target) {
                return mid;
            }

            // Check if the left half [left...mid] is sorted
            if (nums[left] <= nums[mid]) {
                // Check if the target lies within the sorted left half
                if (nums[left] <= target && target < nums[mid]) {
                    right = mid - 1; // Narrow search to the left
                } else {
                    left = mid + 1;  // Narrow search to the right
                }
            } 
            // Otherwise, the right half [mid...right] must be sorted
            else {
                // Check if the target lies within the sorted right half
                if (nums[mid] < target && target <= nums[right]) {
                    left = mid + 1;  // Narrow search to the right
                } else {
                    right = mid - 1; // Narrow search to the left
                }
            }
        }

        // Return -1 if the target is not present in the array
        return -1;
    }
};
