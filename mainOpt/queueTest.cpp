//
// Created by 周子安 on 2021/7/23.
//
#include "iostream"
#include "queue"
using namespace std;
int main(){
    queue<int> q = queue<int>();
    q.emplace(1);
    q.emplace(2);
    int val = q.front();
    cout<<val<<endl;
    q.pop();
    cout<<q.front();

}