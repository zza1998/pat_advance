//
// Created by 周子安 on 2021/8/23.
//
#include "iostream"

using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int findHigherPrime(int n) {
    int x = n;
    while (!isPrime(x)) {
        x++;
    }
    return x;
}

int main() {
    int Tsize, num;
    cin >> Tsize >> num;
    Tsize = findHigherPrime(Tsize);
    int hashTable[Tsize];
    fill(hashTable, hashTable + Tsize, -1);
    int flag = 0;
    for (int i = 0; i < num; ++i) {
        int x;cin >> x;
        int zhen = 0;
        while (zhen<Tsize && hashTable[(x + zhen*zhen) % Tsize] != -1) {
            zhen++;
        }
        int hashcode = (x + zhen*zhen) % Tsize;
        if(hashTable[hashcode]==-1){
            if (flag) cout << " ";
            cout << hashcode;
            hashTable[hashcode] = x;
            flag = 1;
        } else{
            if (flag) cout << " ";
            cout << "-";
            flag = 1;
        }
    }
}