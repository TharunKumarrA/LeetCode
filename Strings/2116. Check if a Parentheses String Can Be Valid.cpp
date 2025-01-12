
    /*
    Time complexity : O(n)
    Space complexity : O(1)
    */


#include <stack>
#include <string>

class Solution {
public:
    bool canBeValid(std::string s, std::string locked) {
        if (s.size() % 2 != 0) {
            return false;
        }

        // First pass: Left-to-right check
        int open = 0;
        int flexible = 0;
        for (size_t i = 0; i < s.size(); ++i) {
            if (locked[i] == '1') {
                if (s[i] == '(') {
                    open++;
                } else {
                    open--;
                }
            } else {
                flexible++;
            }
            if (open + flexible < 0) {
                return false;
            }
        }

        // Second pass: Right-to-left check
        int close = 0;
        flexible = 0;
        for (int i = s.size() - 1; i >= 0; --i) {
            if (locked[i] == '1') {
                if (s[i] == ')') {
                    close++;
                } else {
                    close--;
                }
            } else {
                flexible++;
            }
            if (close + flexible < 0) {
                return false;
            }
        }

        return true;
    }
};


    /*
    Author : TharunKumarrA
    Question Link : https://leetcode.com/problems/check-if-a-parentheses-string-can-be-valid/
    */

    