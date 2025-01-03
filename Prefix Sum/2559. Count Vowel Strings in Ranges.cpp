
    /*
    Time complexity : O(n)
    Space complexity : O(n)
    */


#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    bool isVowel(char ch) {
        ch = std::tolower(ch);
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }

    bool startsAndEndsWithVowel(const std::string& str) {
        if (str.empty()) {
            return false;
        }
        return isVowel(str.front()) && isVowel(str.back());
    }

    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int> prefixSum;
        int crrPrefixSum = 0;
        vector<int> results;

        for (const auto& word : words){
            if ( startsAndEndsWithVowel(word)){
                crrPrefixSum++;
            }
            prefixSum.push_back(crrPrefixSum);
        }
        
        for (const auto& query : queries) {
            int start = query[0];
            int end = query[1];
            int res;
            if (start == 0){
                res = prefixSum[end];
            }
            else{
                res = prefixSum[end] - prefixSum[start-1];
            }
            results.push_back(res);
        }

        return results;
    }
};


    /*
    Author : TharunKumarrA
    Question Link : https://leetcode.com/problems/count-vowel-strings-in-ranges/
    */

    