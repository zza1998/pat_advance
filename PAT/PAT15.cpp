//
// Created by 周子安 on 2021/8/23.
//

#include "iostream"
#include "vector"
using namespace std;
bool isPrime(int n){
    if(n<2){
        return false;
    }
    for (int i = 2; i * i <= n; ++i) {
        if(n%i == 0){
            return false;
        }
    }
    return true;
}
int reverseBy(int n,int radix){
    vector<int> v;
    int res = 0;
    while (n){
        int yu = n%radix;
        v.push_back(yu);
        n/= radix;
    }
    int curRadix = 1;
    for (int i = (int)v.size()-1; i >= 0; i--) {
        res+= curRadix*v[i];
        curRadix *= radix;
    }
    return res;
}
int main(){
    int num,radix;
    while (cin>>num&&num>0&&cin>>radix){
        if(!isPrime(num)){
            cout<<"No"<<endl;
            continue;
        }
        int rev = reverseBy(num,radix);
        if(isPrime(rev)){
            cout<<"Yes"<<endl;
        } else{
            cout<<"No"<<endl;
        }

    }
}