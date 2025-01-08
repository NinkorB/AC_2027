//Solution link https://www.geeksforgeeks.org/problems/gcd-of-two-numbers3459/1

//source code 
class Solution {
  public:
    int gcd(int a, int b) {
      if(a%b == 0){
          return b;
      }
      else{
          return gcd(b, a%b);
    }
    }
};

