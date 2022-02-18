#include "iostream"
#include "sstream"
#include "vector"
using namespace std;
string l1[] = {"tret","jan","feb","mar","apr","may","jun","jly","aug","sep","oct","nov","dec"};
string l2[] = {"","tam","hel","maa","huh","tou","kes","hei","elo" ,"syy","lok","mer","jou"};
bool isEarth(string &s){
    return isdigit(s[0]);
}
string eToA(int x){
    string res;
    int gao = x/13;
    if(gao){
        res += l2[gao];
        int di = x%13;
        if(di){
            res+=" "+l1[di];
        }
    } else{
        res += l1[x];
    }
    return res;
}
int AtoE(string &s1){
    stringstream  ssin(s1);
    vector<string > v;
    string m;
    while (ssin>>m){
        v.push_back(m);
    }
    int res = 0;
    if(v.size()>1){
        for (int i = 0; i < 13; ++i) {
            if(l2[i] == v[0]){
                res+=i*13;
                break;
            }
        }
        for (int i = 0; i < 13; ++i) {
            if(l1[i] == v[1]){
                res+=i;
                break;
            }
        }
    } else{
        for (int i = 0; i < 13; ++i) {
            if(l2[i] == v[0]){
                res+=i*13;
                return res;
            }
            if(l1[i] == v[0]){
                res+=i;
                return res;
            }
        }
    }
    return res;
}
int main(){
    int nums;
    cin>>nums;
    getchar();
    for (int i = 0; i < nums; ++i) {
        string s;
        getline(cin,s);
        if(isEarth(s)){
            int x = stoi(s);
            cout<<eToA(x)<<endl;
        } else{
            cout<<AtoE(s)<<endl;
        }
    }
}