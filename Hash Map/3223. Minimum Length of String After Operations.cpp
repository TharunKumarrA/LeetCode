
    /*
    Time complexity : O(n)
    Space complexity : O(n)
    */


#include <unordered_map>
class Solution {
public:
    int minimumLength(string s) {
        unordered_map<char, int> freqMap;

        for (char c : s) {
            freqMap[c]++;
        }

        int deleteCount = 0;
        for (auto& entry : freqMap) {
            int count = entry.second;
            if (count % 2 == 1) {
                deleteCount += count - 1;
            } else {
                deleteCount += count - 2;
            }
        }
        return s.length() - deleteCount;
    }
};


    /*
    Author : TharunKumarrA
    Question Link : https://leetcode.com/problems/minimum-length-of-string-after-operations/
    */

    