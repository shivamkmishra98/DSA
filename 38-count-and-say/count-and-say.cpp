#include <string>

class Solution {
public:
    std::string countAndSay(int n) {
        // Base case: the first term of the sequence is always "1"
        std::string current = "1";
        
        // Generate the sequence from 2 up to n
        for (int i = 1; i < n; ++i) {
            std::string next_seq = "";
            int len = current.length();
            
            for (int j = 0; j < len; ) {
                int count = 0;
                char digit = current[j];
                
                // Count consecutive identical characters
                while (j < len && current[j] == digit) {
                    count++;
                    j++;
                }
                
                // Append the frequency and the digit to the next sequence
                next_seq += std::to_string(count) + digit;
            }
            
            // Move to the next string representation
            current = std::move(next_seq);
        }
        
        return current;
    }
};
