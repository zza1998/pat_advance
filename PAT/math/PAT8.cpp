//
// Created by 周子安 on 2021/8/20.
//

#include "iostream"
#include "vector"
using namespace std;
vector<int > v;
int main(){
    int n; cin>>n;
    for (int i = 0; i < n; ++i) {
        int x;cin>>x;
        v.push_back(x);
    }
    int cur = 0,sum = 0;
    for (int i = 0; i < n; ++i) {
        if(v[i]>cur){
            sum+=(v[i]-cur)*6 + 5;
        } else if(v[i]<cur){
            sum += (cur-v[i]) * 4 + 5;
        } else{
            sum+=5;
        }
        cur = v[i];
    }
    cout<<sum;

}