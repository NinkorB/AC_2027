// Solution LInk : https://leetcode.com/problems/reverse-words-in-a-string/submissions/1516116564

// Source code :
// Language: java

class Solution {
    public String reverseWords(String s) {
        String[] words = s.trim().split("\\s+");
        StringBuilder reversed = new StringBuilder();

        // Reverse the array of words
        for (int i = words.length - 1; i >= 0; i--) {
            reversed.append(words[i]);
            if (i != 0) {
                reversed.append(" ");
            }
        }

        return reversed.toString();
        
    }

}