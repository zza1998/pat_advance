//
// Created by 周子安 on 2021/8/13.
//

#include "iostream"
#include "unordered_map"
using namespace std;
int main(){
    unordered_map<char,int> m;
    string s1,toS;
    cin>>s1>>toS;
    for (int i = 0; i < s1.size(); ++i) {
        m[s1[i]]++;
    }
    int shao = 0;
    for (int i = 0; i < toS.size(); ++i) {
        if(m[toS[i]]==0){
            shao++;
        }else{
            m[toS[i]]--;
        }
    }
    if(shao){
        cout<<"No "<<shao<<endl;
    } else{
        cout<<"Yes "<<s1.size() - toS.size()<<endl;
    }
}