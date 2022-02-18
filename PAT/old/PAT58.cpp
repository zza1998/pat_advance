//
// Created by 周子安 on 2021/8/3.
//

#include "iostream"
#include "stdio.h"
#include "vector"
using namespace std;
vector<int> spiltIt(const string &s){
    vector<int> v;
    const char c = '.';
    int before = 0;
    for (int i = 0; i < s.size(); ++i) {
        int index = s.find(c,i);
        if(index == -1) {
            v.push_back(stoi(s.substr(before,s.size()-1)));
            break;
        }
        v.push_back(stoi(s.substr(before,index)));
        i+=index-before;
        before = index+1;
    }
    return v;
}
int main(){
    string a, b;
    cin>>a>>b;
    vector<int > v1 = spiltIt(a);
    vector<int > v2 = spiltIt(b);
    int yu1,jin1,yu2,jin2,yu3,jin3;
    yu1 = ( v1[2] + v2[2] ) % 29;
    jin1 = ( v1[2] + v2[2] ) /29;
    yu2 = (v1[1] + v2[1] + jin1)%17;
    jin2 = (v1[1] + v2[1] + jin1)/17;
    yu3 = ( v1[0] + v2[0] + jin2);
    printf("%d.%d.%d",yu3,yu2,yu1);
}