//
// Created by 周子安 on 2021/8/20.
//

#include "iostream"
using namespace std;
int main(){
    int n;cin>>n;
    double sum = 0;
    double nums[n+1];
    for (int i = 1; i <= n; ++i) {
        cin>>nums[i];
    }
    for (int i = 1; i <= n; ++i) {
        int mod = i;
        if(mod>n/2) mod = 2*n-i;
        int chu = 1, chen = n;
        for (int j = 1; j <= mod; ++j) {
            chu*=j;
        }
        int x = n-1;
        int lop = mod-1;
        while (lop--){
            chen = chen * x;
            x--;
        }
        sum +=  nums[i]*((double )chen/chu);
    }
    printf("%.2f",sum);
}