#include "iostream"
#include "vector"
#include "set"
using namespace std;

vector<vector<int>> res;
int N;
vector<int> v;
int vis[10];
set<int> st;
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
        int val = 0;int radix = 1;
        for (int i = 0; i < vv.size(); ++i) {
            val+=vv[i]*radix;
            radix*=10;
        }
        if(st.count(val) == 0){
            res.push_back(vv);
            st.insert(val);
        }
    }
}

vector<vector<int>> permuteUnique(vector<int> &nums) {
    N = nums.size();
    v = nums;
    vector<int> ov;
    findR(ov);
    return res;
}