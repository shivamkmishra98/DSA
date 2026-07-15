// // by using merge sort
// class Solution {
// public:
//     vector<int> sortedSquares(vector<int>& nums) {

//         vector<int> neg;
//         vector<int> pos;

//         for(int x : nums)
//         {
//             if(x < 0)
//                 neg.push_back(x * x);
//             else
//                 pos.push_back(x * x);
//         }

//         reverse(neg.begin(), neg.end());

//         vector<int> ans;

//         int i = 0;
//         int j = 0;

//         while(i < neg.size() && j < pos.size())
//         {
//             if(neg[i] < pos[j])
//             {
//                 ans.push_back(neg[i]);
//                 i++;
//             }
//             else
//             {
//                 ans.push_back(pos[j]);
//                 j++;
//             }
//         }

//         while(i < neg.size())
//         {
//             ans.push_back(neg[i]);
//             i++;
//         }

//         while(j < pos.size())
//         {
//             ans.push_back(pos[j]);
//             j++;
//         }

//         return ans;
//     }
// };
// second by using one exta specifies for position 
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int left = 0;
        int right = n - 1;
        int pos = n - 1;
        while (left <= right) {
            int leftSquare = nums[left] * nums[left];
            int rightSquare = nums[right] * nums[right];

            if (leftSquare > rightSquare) {
                ans[pos] = leftSquare;
                left++;
            }
            else {
                ans[pos] = rightSquare;
                right--;
            }
            pos--;
        }
        return ans;
    }
};
// //direct approch of two pointer 
// class Solution{
// public:
//     vector<int> sortedSquares(vector<int>& nums){
//         int n = nums.size();
//         vector<int> ans(n);
//         int left = 0;
//         int right = n-1;
//         for(int i = n-1; i>=0; i--){
//             if (abs(nums[left] )> abs(nums[right])) {
//                 ans[i] = nums[left] * nums[left];
//                 left++;
//             }
//             else{
//                 ans[i] = nums[right] * nums[right];
//                 right--;
//             }
//         }
//         return ans;
//     }
// };
