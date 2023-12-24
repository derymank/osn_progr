#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> res;
        vector<int> queens(n, -1);
        solve(res, queens, 0, n);
        return res;
    }

    void solve(vector<vector<string>>& res, vector<int>& queens, int row, int n) {
        if (row == n) {
            vector<string> out(n, string(n, '.'));
            for (int i = 0; i < n; ++i) out[i][queens[i]] = 'Q';
            res.push_back(out);
            return;
        }
        for (int i = 0; i < n; ++i) {
            if (isValid(queens, row, i)) {
                queens[row] = i;
                solve(res, queens, row + 1, n);
                queens[row] = -1;
            }
        }
    }

    bool isValid(vector<int>& queens, int row, int col) {
        for (int i = 0; i < row; ++i) {
            if (queens[i] == col || abs(row - i) == abs(col - queens[i])) return false;
        }
        return true;
    }
};

int main() {
    int n;
    cout << "Enter n (1 <= n <= 9): ";
    cin >> n;
    Solution sol;
    vector<vector<string>> solutions = sol.solveNQueens(n);
    for (const auto& solution : solutions) {
        for (const auto& row : solution) {
            cout << row << endl;
        }
        cout << endl;
    }
    return 0;
}