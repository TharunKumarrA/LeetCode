
    /*
    Time complexity : O(n^2)
    Space complexity : O(1)
    */


class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int count = 0;
        for (int i=0; i<words.size(); i++){
            for (int j=0; j<words.size(); j++){
                if (i == j) continue;
                else if (i < j){
                    if (isPrefix(words[j], words[i]) && isSuffix(words[j], words[i])){
                        count++;
                    }
                }
            }
        }
        return count;
    }
private:
    bool isPrefix(string word, string prefix) {
        int n = prefix.length();
        int m = word.length();
        if (m < n) return false;
        if (word.substr(0, n) == prefix) return true;
        else return false;
    }

    bool isSuffix(string word, string suffix) {
        int n = suffix.length();
        int m = word.length();
        if (m < n) return false;
        if (word.substr(m-n) == suffix) return true;
        else return false;
    }
};


    /*
    Author : TharunKumarrA
    Question Link : https://leetcode.com/problems/count-prefix-and-suffix-pairs-i/
    */

    