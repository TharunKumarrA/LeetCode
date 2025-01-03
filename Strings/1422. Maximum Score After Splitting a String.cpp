
    /*
    Time complexity : O(n)
    Space complexity : O(1)
    */


class Solution {
public:
    int maxScore(string s) {
        int right = 0;
        int left = 0;

        for (char c : s){
            if (c == '1'){
                right += 1;
            }
        }

        int maxScore = 0;

        for (int i=0; i<s.length()-1; i++){
            if (s[i] == '0'){
                left++;
            }
            else {
                right--;
            }
            maxScore = max(maxScore, right+left);
        }
        return maxScore;
    }
};


    /*
    Author : TharunKumarrA
    Question Link : https://leetcode.com/problems/maximum-score-after-splitting-a-string/
    */

    