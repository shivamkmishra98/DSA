class Solution {
public:
    bool dfs(int i, int j, int k, vector<vector<char>>& board, string& word) {
        if (k == word.size())
            return true;

        if (i < 0 || j < 0 || i >= board.size() || j >= board[0].size() || board[i][j] != word[k])
            return false;

        char ch = board[i][j];
        board[i][j] = '*';

        bool found = dfs(i+1, j, k+1, board, word) ||
                     dfs(i-1, j, k+1, board, word) ||
                     dfs(i, j+1, k+1, board, word) ||
                     dfs(i, j-1, k+1, board, word);

        board[i][j] = ch;

        return found;
    }

    bool exist(vector<vector<char>>& board, string word) {
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                if (dfs(i, j, 0, board, word))
                    return true;
            }
        }
        return false;
    }
};