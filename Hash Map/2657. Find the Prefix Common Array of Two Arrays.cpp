
    /*
    Time complexity : O(n)
    Space complexity : O(n)
    */


#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_map<int, int> freqMap;
        vector<int> count(A.size(), 0);
        int commonCount = 0;

        for (int i = 0; i < A.size(); i++) {
            freqMap[A[i]]++;
            if (freqMap[A[i]] == 2) {
                commonCount++;
            }

            freqMap[B[i]]++;
            if (freqMap[B[i]] == 2) {
                commonCount++;
            }

            count[i] = commonCount;
        }
        return count;
    }
};


    /*
    Author : TharunKumarrA
    Question Link : https://leetcode.com/problems/find-the-prefix-common-array-of-two-arrays/
    */

    