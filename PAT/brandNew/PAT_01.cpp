//
// Created by 周子安 on 2022/2/14.
//

#include "vector"
#include "iostream"
using namespace std;
int main(){
    int a,b;cin>>a>>b;
    int res = a+b;
    if(res<0){
        cout<<"-";
        res = abs(res);
    }
    string s = to_string(res);
    for (int i = 0; i < s.size(); ++i) {
        cout<<s[i];
        if(i!=s.size()-1&&(s.size()-i-1)%3==0){
            cout<<",";
        }
    }


}