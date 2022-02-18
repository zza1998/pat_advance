//
// Created by 周子安 on 2021/7/30.
//

#include "iostream"
#include "string"
#include "vector"
#include "cmath"
using namespace std;
int main(){
    int num;
    cin>>num;getchar();
    vector<string> v;
    long maxlen = 500;
    for (int i = 0; i < num; ++i) {
        string s;
        getline(cin,s);
        v.push_back(s);
        if(maxlen>s.size()){
            maxlen = s.size();
        }
    }
    int com = 0;
    for (int i = 0; i < maxlen; ++i) {
        int comm = 1;
        char first = v[0][v[0].size()-1-i];
        for (int j = 0; j < v.size(); ++j) {
            int index = v[j].size()-1-i;
            if(v[j][index]!=first){
                comm = 0;
                break;
            }
        }
        // 全相同才增加
        if(comm) com++;
        else break;
    }
    if(com==0){
        cout<<"nai";
    }
    cout<<v[0].substr(v[0].size()-com);
}