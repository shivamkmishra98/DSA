class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int uniqueIndex = 1;

        for(int currentIndex = 1; currentIndex < nums.size(); currentIndex++) {

            if(nums[currentIndex] != nums[currentIndex - 1]) {

                nums[uniqueIndex] = nums[currentIndex];
                uniqueIndex++;
            }
        }

        return uniqueIndex;
    }
};