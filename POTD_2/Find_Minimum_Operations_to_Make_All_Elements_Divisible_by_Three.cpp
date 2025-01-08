// Solution LInk : https://leetcode.com/problems/find-minimum-operations-to-make-all-elements-divisible-by-three/submissions/1485401509


// Source code :
// cpp []
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int rem=0, count=0;
        
        for(int i=0; i< nums.size(); i++){
            rem = nums[i] % 3;
            if(rem != 0){
                count++;
            
        return count;
    }
};
```