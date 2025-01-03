
    /*
    Time complexity : O(n)
    Space complexity : O(1)
    */


class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if (nums.empty()) return 0;
        
        int k = 0;
        for (int i=0; i<nums.size(); i++){
            if (nums[i] != val){
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};


    /*
    Author : TharunKumarrA
    Question Link : https://leetcode.com/problems/remove-element/
    */

    