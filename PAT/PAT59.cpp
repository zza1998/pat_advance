//
// Created by 周子安 on 2021/8/24.
//
#include "iostream"
#include "vector"
#include "map"
#include "math.h"

using namespace std;
vector<int> v;
map<int, int> m, isp;

bool isPre(int n) {
    if (isp.find(n) != isp.end()) {
        return isp[n];
    }
    if (n < 2) {
        isp[n] = 0;
        return false;
    }
    int sqt = (int)sqrt(n);
    for (int i = 2; i <= sqt; ++i) {
        if (n % i == 0) {
            isp[n] = 0;
            return false;
        }
    }
    isp[n] = 1;
    return true;
}

int main() {
    int n ;cin >> n;
    int ori = n;
    if(n==1){
        m[1]++;
    } else{
        while (n > 1) {
            for (int i = 2; i <= n; ++i) {
                if(n%i == 0 && isPre(i)){
                    n /= i;
                    m[i]++;
                }
            }
        }
    }
    int flag = 0;
    cout<<ori<<"=";
    for (auto it : m) {
        if(flag) cout<<"*";
        flag = 1;
        cout << it.first;
        if (it.second > 1) {
            cout << "^" << it.second;
        }
    }
}