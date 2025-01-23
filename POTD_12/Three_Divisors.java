// Solution LInk : https://leetcode.com/problems/three-divisors/submissions/1518409353

// Source code :
// Language: java

class Solution {
    public boolean isThree(int n) {
        int count = 0; 
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                count++;
            }
            
            if (count > 3) {
                return false;
            }
        }
        return count == 3;
    }
}