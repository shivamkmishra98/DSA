class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // Track seen numbers for 9 rows, 9 columns, and 9 sub-boxes
        bool rows[9][9] = {false};
        bool cols[9][9] = {false};
        bool boxes[9][9] = {false};
        
        for (int r = 0; r < 9; ++r) {
            for (int c = 0; c < 9; ++c) {
                // Skip empty slots
                if (board[r][c] == '.') {
                    continue;
                }
                
                // Convert char digit ('1'-'9') to a 0-indexed integer (0-8)
                int num = board[r][c] - '1';
                
                // Map the 2D grid coordinates (r, c) to a 1D sub-box index (0-8)
                int box_index = (r / 3) * 3 + (c / 3);
                
                // If the number has already been seen in this row, col, or box, it's invalid
                if (rows[r][num] || cols[c][num] || boxes[box_index][num]) {
                    return false;
                }
                
                // Mark the number as seen
                rows[r][num] = true;
                cols[c][num] = true;
                boxes[box_index][num] = true;
            }
        }
        
        return true;
    }
};
