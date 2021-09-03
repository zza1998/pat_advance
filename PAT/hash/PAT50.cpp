//
// Created by 周子安 on 2021/8/13.
//
#include "iostream"
#include "map"
using namespace std;
int main(){
    map<char,int> m;
    string s,dup;
    getline(cin,s);
    getline(cin,dup);
    for (int i = 0; i < dup.size(); ++i) {
        m[dup[i]] = 1;
    }
    for (int i = 0; i < s.size(); ++i) {
        if(m[s[i]] != 1){
            cout<<s[i];
        }
    }

}