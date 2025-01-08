
    /*
    Time complexity : O(n)
    Space complexity : O(1)
    */


class Solution {

public:

string convert(string s, int numRows) {

    if (numRows == 1 || s.length() <= numRows) return s;

    int pivot = 0;
    int i = 0;
    int row = 0;
    bool flag = false;
    int count = 0;
    string ans = "";
    int prev_i = -1;

    while (count < s.length()) {
        if (i < s.length() && i != prev_i) {
            ans += s[i];
            count++;
            prev_i = i;
        }

        if (flag) {
            int step = 2 * row;
            i += (step > 0) ? step : (2 * numRows - 2);
        } else {
            int step = (2 * numRows - 2) - 2 * row;
            i += (step > 0) ? step : (2 * numRows - 2);
        }

        if (i >= s.length() || row >= numRows) {
            pivot++;
            i = pivot;
            row++;
            flag = false;
            prev_i = -1;
        } else {
            flag = !flag;
        }
    }

    return ans;
}

};


    /*
    Author : TharunKumarrA
    Question Link : https://leetcode.com/problems/zigzag-conversion/
    */

    