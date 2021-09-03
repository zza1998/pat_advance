//
// Created by 周子安 on 2021/8/18.
//

#include "iostream"
#include "vector"
using namespace std;
vector<int> v[100010];
int leave[100010];
double ori, r;
void dfs(int n,double & sum,double mul){
    if(leave[n]!=0){
        sum += mul * leave[n];
    } else {
        vector<int> vv = v[n];
        for (int i : vv) {
            dfs(i,sum,mul*(1+r*0.01));
        }
    }
}
int main(){
    int num;
    cin>>num>>ori>>r;
    for (int i = 0; i < num; ++i) {
        int cnum;cin>>cnum;
        if(cnum == 0){
            cin>>leave[i];
            continue;
        }
        for (int j = 0; j < cnum; ++j) {
            int node; cin >> node;
            v[i].push_back(node);
        }
    }
    double x = 0;
    dfs(0,x, ori);
    printf("%.1f",x);
}