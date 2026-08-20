#include <vector>
#include <algorithm>

class Solution {
public:
    int maxArea(std::vector<int>& height) {
        int max_water = 0;
        int left = 0;
        int right = height.size() - 1;
        
        while (left < right) {
            // Calculate the width between the two pointers
            int width = right - left;
            
            // The height of the container is limited by the shorter line
            int current_height = std::min(height[left], height[right]);
            
            // Calculate current water volume
            int current_water = width * current_height;
            
            // Update the maximum water found so far
            max_water = std::max(max_water, current_water);
            
            // Move the pointer pointing to the shorter line inward
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
        
        return max_water;
    }
};
