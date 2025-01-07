
    /*
    Time complexity : O(n^2 X m^2)
    Space complexity : O(mn)
    */


/*
Better optimized solution exists - use KMP algorithm to handle string mismatch
I am not aware of it
*/

class Solution {
public:
    vector<string> stringMatching(vector<string> &words) {
        vector<string> matchingWords;

        for (int i=0; i<words.size(); i++) {
            for (int j=0; j<words.size(); j++) {
                if (i == j)
                    continue; 
                if (isSubstringOf(words[i], words[j])) {
                    matchingWords.push_back(words[i]);
                    break; 
                }
            }
        }

        return matchingWords;
    }

private:
    bool isSubstringOf(string &sub, string &main) {
        for (int startIndex = 0; startIndex < main.size(); startIndex++) {
            bool subFits = true;

            for (int subIndex = 0; subIndex < sub.size(); subIndex++) {
                if (startIndex + subIndex >= main.size() ||
                    main[startIndex + subIndex] != sub[subIndex]) {
                    subFits = false; 
                    break; 
                }
            }

            if (subFits) {
                return true; 
            }
        }

        return false; 
    }
};


    /*
    Author : TharunKumarrA
    Question Link : https://leetcode.com/problems/string-matching-in-an-array/
    */

    