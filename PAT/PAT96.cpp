//
// Created by 周子安 on 2021/8/24.
//
#include "iostream"
#include "cmath"

using namespace std;
int main() {
    int n; cin >> n;
    int sqr = (int) sqrt(n);
    int bg = -1, length = 0;
    for (int i = 2; i <= sqr; ++i) {
        int j = i, cnt = 0, m = n;
        while (m % j == 0) {
            m /= j;
            cnt++;
            j++;
        }
        if (cnt > length) {
            bg = i;
            length = cnt;
        }
    }
    if(bg == -1){
        cout<<1<<endl<<n;
        return 0;
    }
    cout <<length<< endl;
    for (int i = bg; i < bg + length; ++i) {
        if (i != bg)cout << "*";
        cout << i;
    }
    cout << endl;


}