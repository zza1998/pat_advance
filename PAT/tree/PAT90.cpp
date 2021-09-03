//
// Created by 周子安 on 2021/8/19.
//

#include "iostream"
#include "vector"
using namespace std;
vector<int > root;
vector<int> v[100010];
double ma = 0, maxNum = 0;
double ori,r;
void dfs(int n,double mul){
    if(v[n].empty()){
        double value = mul * 1;
        if(value > ma){
            ma = value;
            maxNum = 1;
        }else if(value == ma){
            maxNum ++;
        }
    } else{
        vector<int > vv = v[n];
        for (int i : vv) {
            dfs(i,mul * (1+r*0.01));
        }
    }
}
int main(){
    int num;
    cin>>num>>ori>>r;
    for (int i = 0; i < num; ++i) {
        int x; cin>>x;
        if(x==-1){
            root.push_back(i);
        } else{
            v[x].push_back(i);
        }
    }
    for (int i : root) {
        dfs(i,ori);
    }
    printf("%.2f %.0f",ma,maxNum);
}