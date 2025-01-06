
    /*
    Time complexity : O(n)
    Space complexity : O(n)
    */


class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        std::vector<int> answer(n, 0);

        int balls_to_left = 0;
        int moves_to_left = 0;

        for (int i = 0; i < n; ++i) {
            answer[i] += moves_to_left;
            balls_to_left += (boxes[i] - '0'); 
            moves_to_left += balls_to_left; 
        }

        int balls_to_right = 0;
        int moves_to_right = 0;

        for (int i = n - 1; i >= 0; --i) {
            answer[i] += moves_to_right;
            balls_to_right += (boxes[i] - '0');
            moves_to_right += balls_to_right;
        }

        return answer;
    }
};


    /*
    Author : TharunKumarrA
    Question Link : https://leetcode.com/problems/minimum-number-of-operations-to-move-all-balls-to-each-box/
    */

    