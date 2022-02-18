//
// Created by 周子安 on 2022/2/14.
//

#include "iostream"
#include "algorithm"
#include "set"
using namespace std;

double counta[1010];
int nums = 0;
set<int> s;
int main(){
    for (int j = 0; j < 2; ++j) {
        int num1;cin>>num1;
        for (int i = 0; i < num1; ++i) {
            int a; double b;cin>>a>>b;
            counta[a] += b;
        }
    }
    for (int i = 1000; i >= 0; i--) {
        if(counta[i]!=0){
            nums++;
        }
    }
    cout<<nums;
    for (int i = 1000; i >= 0; i--) {
        if(counta[i]!=0){
            printf(" %d %.1f",i,counta[i]);
        }
    }

}