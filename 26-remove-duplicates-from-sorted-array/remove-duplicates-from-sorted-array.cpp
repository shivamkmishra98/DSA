// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {

//         int uniqueIndex = 1;

//         for(int currentIndex = 1; currentIndex < nums.size(); currentIndex++) {

//             if(nums[currentIndex] != nums[currentIndex - 1]) {

//                 nums[uniqueIndex] = nums[currentIndex];
//                 uniqueIndex++;
//             }
//         }

//         return uniqueIndex;
//     }
// };


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int j = 1;

        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[i] != nums[j-1])
            {
                nums[j++] = nums[i];
            }
        }

        return j;
    }
};