//
// Created by 周子安 on 2021/9/3.
//
#include "cmath"
#include "iostream"
using namespace std;
int isPrime(int n){
    if(n<2) return 0;
    for (int i = 2; i * i <= n; ++i) {
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}

int countPrimes(int n) {
    int arr[n+1];
    if(n<3) return 0;
    int sum = 0;
    for (int i = 2; i <= sqrt(n); ++i) {
        if(isPrime(i)){
            for (int j = 2; j*i <= n; ++j) {
                arr[j*i] = 1;
            }
        }
    }
    for (int i = 0; i <= n; ++i) {
        if(arr[i] == 0){
            sum++;
        }
    }
    return sum;
}
int main(){
    cout<< countPrimes(5000000);
}