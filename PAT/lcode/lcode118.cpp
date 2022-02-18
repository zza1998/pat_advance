


#include "iostream"
#include "vector"

using namespace std;

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> res;
    for (int i = 1; i <= numRows; ++i) {
        vector<int> v;
        for (int j = 0; j < i; ++j) {
            if(j==0 || j==i-1){
                v.push_back(1);
            } else{
                v.push_back(res[i-2][j-1]+res[i-2][j]);
            }
        }
        res.push_back(v);
    }
    return res;
}

int main() {
    generate(5);
}

