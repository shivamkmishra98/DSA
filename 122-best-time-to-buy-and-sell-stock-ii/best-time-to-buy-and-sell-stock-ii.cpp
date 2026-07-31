// class Solution{
//     public: 
//         int findAns(int idx, int buy, vector<int>prices,vector<vector<int>>& dp){
//             if(idx == prices.size())
//                 return 0;
//             if (dp[idx][buy] != -1)
//             return dp[idx][buy];
//             if (buy == 1){
//                 int by = -prices[idx]+findAns(idx+1,0,prices,dp);
//                 int notby = findAns(idx+1,1,prices,dp);
//                 return dp[idx][buy] = max(by,notby);
//             }      
//             else{
//                 int sell=prices[idx] + findAns(idx+1,1, prices, dp);
//                 int notsell = findAns(idx+1,0,prices,dp);
//                 return dp[idx][buy]= max(sell,notsell);

//             }
//         }
//         int maxProfit(vector<int>&prices){
//             int n = prices.size();
//             vector<vector<int>>dp(n, vector<int>(2,-1));
//             return findAns(0,1,prices,dp);
//         }

// };
// #TABULATION METHOD 

// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {

//         int n = prices.size();

//         vector<vector<int>> dp(n + 1, vector<int>(2, 0));

//         for (int idx = n - 1; idx >= 0; idx--) {

//             // buy = 1
//             dp[idx][1] = max(-prices[idx] + dp[idx + 1][0],
//                               dp[idx + 1][1]);

//             // buy = 0
//             dp[idx][0] = max(prices[idx] + dp[idx + 1][1],
//                               dp[idx + 1][0]);
//         }

//         return dp[0][1];
//     }
// };
// #SPACE OPTIMISED
class Solution {
public:
    int maxProfit(vector<int>& prices) {

        vector<int> ahead(2, 0), curr(2, 0);

        for (int idx = prices.size() - 1; idx >= 0; idx--) {

            curr[1] = max(-prices[idx] + ahead[0],
                          ahead[1]);

            curr[0] = max(prices[idx] + ahead[1],
                          ahead[0]);

            ahead = curr;
        }

        return ahead[1];
    }
};