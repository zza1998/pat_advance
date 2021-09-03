#include "iostream"
#include "algorithm"
#include "vector"
using namespace std;
int cmp(string s,string s2){
    string t1 = s.append(s2);
    string t2 = s2.append(s);
    return t1<t2;
}
vector<string> v;
int main(){
    int num; cin>>num;
    for (int i = 0; i < num; ++i) {
        string x;cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end(),cmp);
    string res;
    for (int i = 0; i < v.size(); ++i) {
        res.append(v[i]);
    }
    int flag = 0;
    for (int i = 0; i < res.size(); ++i) {
        if(res[i] == '0'){
            if(flag||i==res.size()-1){
                cout<<res[i];
            }
        } else{
            cout<<res[i];
            flag = 1;
        }
    }
}