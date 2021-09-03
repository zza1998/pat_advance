//
// Created by 周子安 on 2021/8/26.
//
#include "iostream"
#include "algorithm"
using namespace std;
int main(){
    string a = "bhdzzaae";
    sort(a.begin(),a.end());
    cout<<a;
    cout<<lower_bound(a.begin(),a.end(),'f')-a.begin();

}