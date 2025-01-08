// Solution LInk : https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/submissions/1485801356

// Source code :
// Language: cpp

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int count = 0;
        vector<int> arr(nums.size());
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums.size(); j++) {
                if (nums[i] > nums[j]) {
                   count++;
        }
        }
        arr[i] = count;
        count = 0;
        }
        return arr;
        
    }
};