//
// Created by 周子安 on 2022/2/28.
//

#include "iostream"
#include "vector"
using namespace std;
int uniquePaths(int m, int n) {
    vector<vector<int>> f(m, vector<int>(n));
    for (int i = 0; i < m; ++i) {
        f[i][0] = 1;
    }
    for (int i = 0; i < n; ++i) {
        f[0][i] = 1;
    }
    for (int i = 1; i < m; ++i) {
        for (int j = 1; j < n; ++j) {
            f[i][j] = f[i-1][j]+f[i][j-1];
        }
    }
    return f[m-1][n-1];
}
int main(){
    uniquePaths(3,7);
}