//
// Created by 周子安 on 2021/8/2.
//
#include "iostream"
#include "string"

using namespace std;

int main() {
    int num;
    cin >> num;
    string origin[] = {"", "S1", "S2", "S3", "S4", "S5", "S6", "S7", "S8", "S9", "S10", "S11", "S12", "S13",
                       "H1", "H2", "H3", "H4", "H5", "H6", "H7", "H8", "H9", "H10", "H11", "H12", "H13",
                       "C1", "C2", "C3", "C4", "C5", "C6", "C7", "C8", "C9", "C10", "C11", "C12", "C13",
                       "D1", "D2", "D3", "D4", "D5", "D6", "D7", "D8", "D9", "D10", "D11", "D12", "D13",
                       "J1", "J2"};
    int change[55];
    string newOrder[55];
    for (int i = 1; i < 55; ++i) {
        cin >> change[i];
    }
    for (int i = 0; i < num; ++i) {
        for (int j = 1; j < 55; ++j) {
            newOrder[change[j]] = origin[j];
        }
        if (i != num - 1) {
            for (int j = 1; j < 55; ++j) {
                origin[j] = newOrder[j];
            }
        }
    }
    int flag = 0;
    for (int i = 1; i < 55; ++i) {
        if(flag){cout<<" ";}
        flag = 1;
        cout<<newOrder[i];
    }
}
