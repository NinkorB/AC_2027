// Solution LInk : https://leetcode.com/problems/sort-colors/submissions/1487403935

// Source code :
// Language: cpp

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count0 = 0, count1 = 0, count2 = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) count0++;
            else if (nums[i] == 1) count1++;
            else count2++;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (i < count0) nums[i] = 0;
            else if (i < count0 + count1) nums[i] = 1;
            else nums[i] = 2;
        }
    }
};
