
    /*
    Time complexity : O(n)
    Space complexity : O(n)
    */


class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        vector<long long> prifixSum;
        long long crrPS = 0;
        int splits = 0;

        for (int i=0; i<nums.size(); i++){
            crrPS += nums[i];
            prifixSum.push_back(crrPS);
        }

        for (int i=0; i<prifixSum.size()-1; i++){
            if (prifixSum[i] >= (prifixSum[prifixSum.size()-1]-prifixSum[i])){
                splits++;
            }
        }
        return splits;
    }
};


    /*
    Author : TharunKumarrA
    Question Link : https://leetcode.com/problems/number-of-ways-to-split-array/
    */

    