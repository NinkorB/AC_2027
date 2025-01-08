// Solution LInk : https://leetcode.com/problems/happy-number/submissions/1502231827

// Source code :
// Language: java

import java.util.HashSet;
import java.util.Set;

class Solution {
    public boolean isHappy(int n) {
        Set<Integer> usedIntegers = new HashSet<>();
        
        while (n != 1) {
            int sum = sumOfSquares(n);
            if (usedIntegers.contains(sum)) {
                return false;
            }
            usedIntegers.add(sum);
            n = sum;
        }
        
        return true;
    }

    private int sumOfSquares(int n) {
        int sum = 0;
        while (n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }
        return sum;

    }
}