
    /*
    Time complexity : O(n)
    Space complexity : O(1)
    */


class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count = 0;
        for (string& word : words) {
            if (word.find(pref) == 0) {
                count++;
            }
        }
        return count;
    }
};


    /*
    Author : TharunKumarrA
    Question Link : https://leetcode.com/problems/counting-words-with-a-given-prefix/
    */

    