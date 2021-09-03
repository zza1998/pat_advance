//
// Created by 周子安 on 2021/8/17.
//
#include "vector"
#include "iostream"
#include "algorithm"
using namespace std;
int w[110],weight;
vector<int > v[110];
int cmpS (int i,int j){
    return w[i]>w[j];
}
void dfs(int i,int value,vector<int> &path){
    // 叶子节点并且到达
    if(v[i].empty()){
        if(value == weight){
            for (int j = 0; j < path.size(); ++j) {
                if(j) cout<<" ";
                cout<<path[j];
            }
            cout<<endl;
        }
        return;
    }
    vector<int> iv = v[i];
    sort(iv.begin(),iv.end(),cmpS);
    for (int j = 0; j < iv.size(); ++j) {
        value += w[iv[j]];
        path.push_back(w[iv[j]]);
        dfs(iv[j],value,path);
        value -= w[iv[j]];
        path.pop_back();
    }
}
int main(){
    int num, M;
    cin>>num>>M>>weight;
    for (int i = 0; i < num; ++i) {
        cin>>w[i];
    }
    for (int i = 0; i < M; ++i) {
        int code, chNum;
        cin>>code>>chNum;
        for (int j = 0; j < chNum; ++j) {
            int chl;cin>>chl;
            v[code].push_back(chl);
        }
    }
    vector<int> vv;
    vv.push_back(w[0]);
    dfs(0,w[0],vv);
}