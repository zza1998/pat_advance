//
// Created by 周子安 on 2021/8/13.
//
#include "iostream"
#include "vector"
#include "unordered_map"
using namespace std;
int main(){
    int num;
    vector<int> v;
    unordered_map<int,int> m;
    cin>>num;
    for (int i = 0; i < num; ++i) {
        int cnum;cin>>cnum;
        m[cnum]++;
        v.push_back(cnum);
    }
    for (int i = 0; i < num; ++i) {
        if(m[v[i]] == 1){
            cout<<v[i]<<endl;
            break;
            return 0;
        }
    }
    cout<<"None"<<endl;
}