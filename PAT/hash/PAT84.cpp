//
// Created by 周子安 on 2021/8/13.
//

#include "iostream"
#include "map"
using namespace std;
int main(){
    map<char,int> m,m2;
    string s,broke;
    cin>>s>>broke;
    for (char & i : broke) {
        m[i] = 1;
    }
    for (int i = 0; i < s.size(); ++i) {
        if(m[s[i]] == 1){
            continue;
        }
        char pc;
        if(islower(s[i])){
            pc = (char)(s[i]+('A'-'a'));
        }else{
            pc = s[i];
        }
        if(m2[pc]!=1){
            cout<<pc;
        }
        m2[pc] = 1;
    }

}