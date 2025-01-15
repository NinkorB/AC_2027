// Solution LInk : https://leetcode.com/problems/product-of-array-except-self/submissions/1509682883

// Source code :
// Language: java

class Solution {
    public int[] productExceptSelf(int[] nums) {
        int n = nums.length;
        int[] result = new int[n];
        int product = 1;
        int zeroCount = 0;

        for (int num : nums) {
            if (num == 0) {
                zeroCount++;
            } else {
                product *= num;
            }
        }

        if (zeroCount > 1) {
            return result;
        }

        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                result[i] = product;
            } else if (zeroCount == 0) {
                result[i] = product / nums[i];
            }
        }

        return result;
    }
}
