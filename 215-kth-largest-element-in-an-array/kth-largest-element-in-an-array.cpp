class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());   // sort ascending
        return nums[nums.size() - k];     // kth largest
    }
};



// 1st step ->First k elements ka group; second ->Ab baaki elements check karenge 3rd ->Group ka smallest element ko print karwa denge 

// class Solution {
// public:
//     int findKthLargest(vector<int>& nums, int k) {
//       int n = nums.size();
//       for(int i  = k ; i<n; i++){
//         int minIndex = 0;
//         for(int j= 1; j <k;j++){
//             if(nums[j]<nums[minIndex]){
//                 minIndex  = j;
//             }
//         }
//         if(nums[i]>nums[minIndex]){
//             nums[minIndex] = nums[i];
//         }
//       }
//       int ans = nums[0];
//       for(int i = 1; i< k; i++){
//         if(nums[i]<ans)
//           ans = nums[i];
//       }  
//       return ans;
//     }
// };
   
