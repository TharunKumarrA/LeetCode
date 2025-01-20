
    /*
    Time complexity : O(mn)
    Space complexity : O(mn)
    */


class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int rows = mat.size();
        int cols = mat[0].size();

        vector<int> rowCount(rows, 0);
        vector<int> colCount(cols, 0);

        unordered_map<int, pair<int, int>> positions;

        for (int i=0; i<rows; i++) {
            for (int j=0; j<cols; j++) {
                positions[mat[i][j]] = {i, j};
            }
        }

        for (int i=0; i<arr.size(); i++) {
            auto pos = positions[arr[i]];
            int r = pos.first;
            int c = pos.second;

            rowCount[r] += 1;
            colCount[c] += 1;

            if (rowCount[r] == cols || colCount[c] == rows) {
                return i;
            }
        }

        return -1;
    }
};


    /*
    Author : TharunKumarrA
    Question Link : https://leetcode.com/problems/first-completely-painted-row-or-column/
    */

    