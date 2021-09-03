//
// Created by 周子安 on 2021/7/28.
//
#include "iostream"
#include "string"
using namespace std;

int main() {
    string num;
    cin >> num;
    int sum = 0;
    for (char i : num)
    {
        sum+=i-'0';
    }
    string eng[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    string s = to_string(sum);
    for (int i = 0; i < s.size(); ++i) {
        if(i)cout<<" ";
        cout<<eng[s[i]-'0'];
    }
}

