//
// Created by 周子安 on 2021/8/24.
//
#include "iostream"
using namespace std;
int main(){
    string s;
    cin>>s;
    int yu = 1000000007;
    int p = 0,t=0,sum=0;
    int plist[s.length()],tlist[s.length()];
    for (int i = s.length()-1; i >= 0 ; i--) {
        if(s[i] == 'T'){
            t++;
        }
        tlist[i] = t;
    }
    for (int i = 0; i < s.length(); ++i) {
        if(s[i] == 'P'){
            p++;
        }
        plist[i] = p;
        if(s[i] == 'A'){
            sum+= plist[i]*tlist[i];
            sum%=yu;
        }
    }
    cout<<sum;

}