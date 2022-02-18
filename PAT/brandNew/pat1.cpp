//
// Created by 周子安 on 2022/2/14.
//
#include <iostream>
#include "queue"
using namespace std;
const int N=1e5+10;
struct node{
    int a,b;
}s[N];
int L[N],R[N];
int st[110];
bool cmp(node a,node b){
    return a.a<b.a;
}
int dfs(int l,int r){
    if(r<l)
        return 0;
    int i;
    int rt=l;
    for(i=l;i<=r;i++){
        if(s[i].b<s[rt].b){
            rt=i;
        }
    }
    L[rt]=dfs(l,rt-1);
    R[rt]=dfs(rt+1,r);
    return rt;
}
void bfs(int u){
    queue<int> q;
    vector<int> num1;
    vector<int> num2;
    q.push(u);
    while(q.size()){
        int t=q.front();
        q.pop();
        num1.push_back(s[t].a);
        num2.push_back(s[t].b);
        //cout<<L[t]<<" "<<R[t]<<endl;
        //cout<<s[L[t]].b<<" "<<s[R[t]].b<<endl;
        if(L[t])
            q.push(L[t]);
        if(R[t])
            q.push(R[t]);
    }
    for(int i=0;i<num1.size();i++){
        if(i){
            cout<<" "<<num1[i];
        }
        else{
            cout<<num1[i];
        }
    }
    cout<<endl;
    for(int i=0;i<num2.size();i++){
        if(i){
            cout<<" "<<num2[i];
        }
        else{
            cout<<num2[i];
        }
    }
}
int main(){
    int n;
    cin>>n;
    int i;
    for(i=1;i<=n;i++){
        cin>>s[i].a>>s[i].b;
    }
    sort(s+1,s+1+n,cmp);
    int rt=dfs(1,n);
    bfs(rt);
}

