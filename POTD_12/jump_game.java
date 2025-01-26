https://leetcode.com/problems/jump-game/submissions/1518673865

// Source code :
// Language: java

class Solution {
    public boolean canJump(int[] nums) {
        int index = 0;
        int n = nums.length;

        for (int i = 0; i < n; i++) {
            if (i > index) {
                return false;
            }
            index = Math.max(index, i + nums[i]);
            if (index >= n - 1) {
                return true;
            }
        }
        return false;
    }
}