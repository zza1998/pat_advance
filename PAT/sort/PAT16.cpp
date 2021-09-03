//
// Created by 周子安 on 2021/8/9.
//

#include "iostream"
#include "unordered_map"
#include "vector"
using namespace std;
int tolls[25],daySpend = 0;
struct Item{
    int beginH{},endH{},beginM{},endM{};
    int beginDay{},endDay{};
    int hasClose = 0;
};
struct User{
    string name;
    int month;
    vector<Item> spend;
};
int main(){
    unordered_map<string,User> m;
    for (int i = 1; i <= 24; ++i) {
        cin>>tolls[i];
        daySpend += tolls[i];
    }
    int num;cin>>num;
    for (int i = 0; i < num; ++i) {
        string u;
        cin>>u;
        Item item;

    }
}