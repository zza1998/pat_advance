//
// Created by 周子安 on 2021/8/4.
//
#include "iostream"
#include "algorithm"
#include "cmath"
using namespace std;

long long toInt(const string &num, long long jin) {
    long long result = 0;
    int up = 0;
    for (int i = num.length()-1; i >= 0; i--) {
        char n = num[i];
        if (isdigit(n)) {
            result += (n - '0') * pow(jin,up++);
        } else {
            result += (n - 'a' + 10) * pow(jin,up++);
        }
    }
    return result;
}
long long  findRadix(const string &s, long long number){
    char c = *max_element(s.begin(),s.end());
    long long  low = (isdigit(c)?c-'0':c-'a'+10) +1;
    long long  high = max(low,number);
    while (low<=high){
        long long mid = low + (high - low)/2;
        long long ch = toInt(s,mid);
        if(ch <0 || ch>number) {
            high=mid-1;
        } else if(ch == number){
            return mid;
        } else{
            low = mid + 1;
        }
    }
    return -1;

}
int main() {
    string a, b;
    int ch; long long j;
    cin >> a >> b >> ch >> j;
    if (ch != 1) {
        swap(a, b);
    }
    long long res = findRadix(b, toInt(a,j));
    if(res != -1){
        cout<<res;
    } else{
        cout << "Impossible" << endl;
    }
}
