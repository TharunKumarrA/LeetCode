
    /*
    Time complexity : O(n)
    Space complexity : O(n)
    */


class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        vector<int> diffArray(s.size(), 0);
        for (auto& rules : shifts){
            int start = rules[0];
            int end = rules[1];
            int dir = rules[2];

            if (dir == 1){
                diffArray[start]++;
                if (end+1 < s.size()){
                    diffArray[end+1]--;
                }
            }
            else{
                diffArray[start]--;
                if (end+1<s.size()){
                    diffArray[end+1]++;
                }
            }
        }
        string result(s.size(), ' ');
        int noOfShifts = 0;

        for (int i=0; i<s.size(); i++){
            noOfShifts = (noOfShifts + diffArray[i])%26;
            if (noOfShifts < 0){
                noOfShifts += 26;
            }
            result[i] = 'a' + (s[i] - 'a' + noOfShifts)%26;
        }
        return result;
    }
};


    /*
    Author : TharunKumarrA
    Question Link : https://leetcode.com/problems/shifting-letters-ii/
    */

    