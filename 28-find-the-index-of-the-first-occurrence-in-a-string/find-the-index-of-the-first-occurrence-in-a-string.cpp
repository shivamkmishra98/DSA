// class Solution {
// public:
//     int strStr(string haystack, string needle) {
//         int n = haystack.length();
//         int m = needle.length();
        
//         // Edge case: needle is longer than haystack
//         if (m > n) return -1;
        
//         // Only loop up to where the needle can physically fit
//         for (int i = 0; i <= n - m; i++) {
//             int j = 0;
            
//             // Check character by character
//             while (j < m && haystack[i + j] == needle[j]) {
//                 j++;
//             }
            
//             // If the entire needle matched, return the starting index
//             if (j == m) return i;
//         }
        
//         return -1;
//     }
// };
// //
class Solution {
public:
    int strStr(string haystack, string needle) {
        // Find the starting position of needle in haystack
        size_t found = haystack.find(needle);
        
        // If found, return the indexcast to int; otherwise return -1
        return (found != string::npos) ? static_cast<int>(found) : -1;
    }
};
