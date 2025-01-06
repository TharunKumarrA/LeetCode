
    /*
    Time complexity : O(n^2)
    Space complexity : O(n+k)
    */


#include <algorithm>

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;

        std::sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); ++i) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            int target = -nums[i]; 
            unordered_map<int, int> hashMap;
            for (int j = i + 1; j < nums.size(); ++j) {
                int complement = target - nums[j];
                if (hashMap.find(complement) != hashMap.end()) {
                    result.push_back({nums[i], nums[j], complement});

                    while (j + 1 < nums.size() && nums[j] == nums[j + 1]) ++j;
                }
                hashMap[nums[j]] = j;
            }
        }
        return result;
    }
};


    /*
    Author : TharunKumarrA
    Question Link : https://leetcode.com/problems/3sum/
    */

    