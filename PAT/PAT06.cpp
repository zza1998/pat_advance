//
// Created by 周子安 on 2021/8/3.
//

#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;
struct User{
    string name;
    string start;
    string end;
};
bool cmp1( const User &user1, const User &user2){
    return user1.start<user2.start;
}
bool cmp2( const User &user1, const User &user2){
    return user1.end>user2.end;
}
int main(){
    int num ;
    cin>>num;
    vector<User> v;
    for (int i = 0; i < num; ++i) {
        string n,s,e;cin>>n>>s>>e;
        User u;
        u.name = n;
        u.start = s;
        u.end = e;
        v.push_back(u);
    }
    sort(v.begin(),v.end(),cmp1);
    cout<<v[0].name<<" ";
    sort(v.begin(),v.end(),cmp2);
    cout<<v[0].name<<endl;
}