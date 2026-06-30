class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());   // sort ascending
        return nums[nums.size() - k];     // kth largest
    }
};
