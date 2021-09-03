#include "iostream"
#include "map"
#include "algorithm"
#include "vector"
#include "unordered_set"
using namespace std;
struct Stu {
    int code;
    vector<int> nan, nv;
};
map<int,int> rela;
int main() {
    int n, m;
    cin >> n >> m;
    map<int, Stu> mp;
    for (int i = 0; i < m; ++i) {
        string a, b;
        cin >> a >> b;
        if (b[0] != '-') {
            mp[abs(stoi(a))].nan.push_back(abs(stoi(b)));
        } else {
            mp[abs(stoi(a))].nv.push_back(abs(stoi(b)));
        }
        if (a[0] != '-') {
            mp[abs(stoi(b))].nan.push_back(abs(stoi(a)));
        } else {
            mp[abs(stoi(b))].nv.push_back(abs(stoi(a)));
        }
        rela[abs(stoi(a))+abs(stoi(b))*100000] = rela[abs(stoi(b))+abs(stoi(a))*100000] =1;
    }
    int check;
    cin >> check;
    for (int i = 0; i < check; ++i) {
        map<string,int> vnode;
        int u1, u2;
        cin >> u1 >> u2;
        Stu s1 = mp[u1];Stu s2 = mp[u2];
        vector<int> v1; vector<int> v2;
        if(u1>0){
            for (int j : s1.nan) {
                if(j!=abs(u2)){
                    v1.push_back(j);
                }
            }
        } else{
            for (int j : s1.nv) {
                if(j!=abs(u2)){
                    v1.push_back(j);
                }
            }
        }
        if(u2>0){
            for (int j : s2.nan) {
                if(j!=abs(u1)){
                    v2.push_back(j);
                }
            }
        } else{
            for (int j : s2.nv) {
                if(j!=abs(u1)){
                    v2.push_back(j);
                }
            }
        }
        for (int j = 0; j < v1.size(); ++j) {
            for (int k = 0; k < v2.size(); ++k) {
                if(rela[(v1[j])+(v2[k])*100000] == 1){
                    vnode.emplace(to_string(abs(v1[j]))+ " "+ to_string(abs(v2[k])),1);
                }
            }
        }
        cout<<vnode.size()<<endl;
        if(!vnode.empty()){
            for (const auto& it:vnode) {
                cout<<it.first<<endl;
            }
        }
    }



}