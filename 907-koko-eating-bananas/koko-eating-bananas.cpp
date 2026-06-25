class Solution {
public:
    int minEatingSpeed(vector<int>& arr, int h) {
        long long start = 1, end = *max_element(arr.begin(), arr.end());

        while(start <= end) {
            long long mid = start + (end - start)/2;

            long long tr = 0;

            for(int it: arr) {
                if (it % mid != 0) {
                    tr += (it / mid) + 1;
                }
                else {
                    tr += it/mid;
                }
            }

            if(tr > h) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

        return start;    
    }
};