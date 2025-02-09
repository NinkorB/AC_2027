// Solution LInk : https://leetcode.com/problems/minimum-moves-to-convert-string/submissions/1502054436

// Source code :
// Language: cpp

class Solution {
public:
    int minimumMoves(string s) {
        int count = 0;
        int i = 0;
        while (i < s.size()) {
            if (s[i] == 'X') {
                count++;
                i += 3;
            } else {
                i++;
            }
        }
        return count;
    }
};