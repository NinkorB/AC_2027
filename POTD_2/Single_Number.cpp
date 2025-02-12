// Solution Link : https://leetcode.com/problems/single-number/submissions/1485396832


// Source code :
// cpp []

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int num = 0;
        for (int n : nums) {
            num ^= n;
        }
        return num;
    }
};
