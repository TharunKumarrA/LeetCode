
    /*
    Time complexity : O(n)
    Space complexity : O(1)
    */


class Solution {
public:
    int romanToInt(string s) {
        int val = 0;
        int i = 0;
        while (i < s.length() - 1) {
            int crr = 0;
            if (s[i] == 'I') {
                if (s[i + 1] == 'V') {
                    crr = 4;
                    i += 2;
                } else if (s[i + 1] == 'X') {
                    crr = 9;
                    i += 2;
                } else {
                    crr = 1;
                    i++;
                }
            } else if (s[i] == 'V') {
                crr = 5;
                i++;
            } else if (s[i] == 'X') {
                if (s[i + 1] == 'L') {
                    crr = 40;
                    i += 2;
                } else if (s[i + 1] == 'C') {
                    crr = 90;
                    i += 2;
                } else {
                    crr = 10;
                    i++;
                }
            } else if (s[i] == 'L') {
                crr = 50;
                i++;
            } else if (s[i] == 'C') {
                if (s[i + 1] == 'D') {
                    crr = 400;
                    i += 2;
                } else if (s[i + 1] == 'M') {
                    crr = 900;
                    i += 2;
                } else {
                    crr = 100;
                    i++;
                }
            } else if (s[i] == 'D') {
                crr = 500;
                i++;
            } else {
                crr = 1000;
                i++;
            }
            val += crr;
        }
        if (i == s.length() - 1) {
            if (s[i] == 'I') val += 1;
            else if (s[i] == 'V') val += 5;
            else if (s[i] == 'X') val += 10;
            else if (s[i] == 'L') val += 50;
            else if (s[i] == 'C') val += 100;
            else if (s[i] == 'D') val += 500;
            else if (s[i] == 'M') val += 1000;
        }
        return val;
    }
};


    /*
    Author : TharunKumarrA
    Question Link : https://leetcode.com/problems/roman-to-integer/
    */

    