//
// Created by 周子安 on 2022/2/16.
//

#include "iostream"
using namespace std;
int nums = 0;

int arr[100];
int climbStairs(int n) {
    if(n==0){
        return 1;
    } else if(n<0){
        return 0;
    }
    if(arr[n]>0){
        return arr[n];
    }
    int val =  climbStairs(n-1) + climbStairs(n-2);
    arr[n] = val;
    return val;
}
int main(){
    climbStairs(44);
}
