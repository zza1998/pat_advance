//
// Created by 周子安 on 2021/8/3.
//
#include "iostream"
#include "vector"
using namespace std;
int main(){
    int N, b;
    cin >> N >> b;
    vector<int> v;
    while (N){
        int yu = N%b;
        v.push_back(yu);
        N = N/b;
    }
    bool flag = true;
    if(v.size()>1){
        for (int i = 0; i <= v.size()/2; ++i) {
            if(v[i] != v[v.size()-i-1]){
                flag = false;
                break;
            }
        }
    }
    if(flag){
        cout<<"Yes"<<endl;
    } else{
        cout<<"No"<<endl;
    }
    for (int i = v.size() - 1;i>=0; i--) {
        if(i != v.size() - 1){
            cout<<" ";
        }
        cout<<v[i];
    }
}