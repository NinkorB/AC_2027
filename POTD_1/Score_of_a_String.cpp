// Solution link https://leetcode.com/problems/score-of-a-string/submissions/1484705786

// source code :
// cpp []

#include<string.h>
class Solution {
public:
    int scoreOfString(string s) {
        int sum=0, i=0;
        for(i; i<s.length()-1; i++){
           sum += abs(s[i]-s[i+1]);
        }
        return sum;
        
    }
};
```
