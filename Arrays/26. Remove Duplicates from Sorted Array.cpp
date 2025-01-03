
    /*
    Time complexity : O(n)
    Space complexity : O(1)
    */


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        int k = 1;
        for (int i=0; i<nums.size(); i++){
            if (nums[i] != nums[k-1]){
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};


    /*
    Author : TharunKumarrA
    Question Link : https://leetcode.com/problems/remove-duplicates-from-sorted-array/
    */

    