#include "iostream"
#include "vector"

using namespace std;


vector<vector<int>> res;
int N;
vector<int> v;
int vis[10];

void findR(vector<int> &vv) {
    for (int i = 0; i < N; ++i) {
        if (vis[i] == 1) { continue; }
        else {
            vis[i] = 1;
            vv.push_back(v[i]);
            findR(vv);
            vv.pop_back();
            vis[i] = 0;
        }
    }
    if(vv.size() == N){
        res.push_back(vv);
    }
}

vector<vector<int>> permute(vector<int> &nums) {
    N = nums.size();
    v = nums;
    vector<int> ov;
    findR(ov);
    return res;
}