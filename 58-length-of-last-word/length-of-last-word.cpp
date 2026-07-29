class Solution {
public:
    int lengthOfLastWord(std::string s) {
        int length = 0;
        int i = s.length() - 1;
        
        // Step 1: Skip trailing spaces at the end
        while (i >= 0 && s[i] == ' ') {
            i--;
        }
        
        // Step 2: Count characters of the last word until a space is hit
        while (i >= 0 && s[i] != ' ') {
            length++;
            i--;
        }
        
        return length;
    }
};