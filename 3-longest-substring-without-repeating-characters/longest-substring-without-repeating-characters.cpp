class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // Map to store the last seen index of each character (ASCII size 128)
        vector<int> lastIndex(128, -1);
        
        int maxLength = 0;
        int start = 0; // Left pointer of the sliding window
        
        for (int end = 0; end < s.length(); ++end) {
            char current_char = s[end];
            
            // If the character is already inside the current window, 
            // shrink the window by moving 'start' past its last occurrence.
            if (lastIndex[current_char] >= start) {
                start = lastIndex[current_char] + 1;
            }
            
            // Record/update the current character's index
            lastIndex[current_char] = end;
            
            // Calculate window length and update max
            maxLength = max(maxLength, end - start + 1);
        }
        
        return maxLength;
    }
};
