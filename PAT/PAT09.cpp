//
// Created by 周子安 on 2021/8/2.
//
#include "iostream"
using namespace std;
int main(){
    double nums[1010] = {0};
    double result[100010] = {0};
    int num;cin>>num;
    for (int i = 0; i < num; ++i) {
        int x ; double  m;
        cin>>x>>m;
        nums[x] = m;
    }
    int num2 ;cin>>num2;
    for (int i = 0; i < num2; ++i) {
        int x; double m;
        cin>>x>>m;
        for (int j = 0; j < 1010; ++j) {
            if(nums[j]!=0){
                int ind = x+j;
                double inds = m * nums[j];
                result[ind] += inds;
            }
        }
    }
    for (int i = 0; i < 100010; ++i) {
        if(result[i]>10){
            int jin = (int)result[i]/10;
            result[i] = result[i]-10*jin;
            result[i+1] += jin;
        }
    }
    int total = 0;
    for (int i = 0; i < 100010; ++i) {
        if(result[i]!=0) total++;
    }
    cout<<total;
    for (int i = 100010-1; i >= 0 ; i--) {
        if(result[i]!=0)
        printf(" %d %.1lf",i,result[i]);
    }
}
