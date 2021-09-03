//
// Created by 周子安 on 2021/8/16.
//
#include "vector"
#include "iostream"
#include "queue"
using namespace std;
vector<int> v[110];
int level[110];
int main(){
    int M,N;
    cin>>M>>N;
    for (int i = 0; i < N; ++i) {
        int node,cnum;
        cin>>node>>cnum;
        for (int j = 0; j < cnum; ++j) {
            int x; cin>>x;
            v[node].push_back(x);
        }
    }
    int l = 0,last = 1;
    int tmpLast;
    queue<int> q;
    q.push(1);
    while (!q.empty()){
        int val = q.front();
        q.pop();
        vector<int> chr = v[val];
        if(chr.empty()){
            level[l]++;
        } else{
            for (int & i : chr) {
                q.push(i);
                tmpLast = i;
            }
        }
        if(val == last){
            l++;
            last = tmpLast;
        }
    }
    for (int i = 0; i < l; ++i) {
        if(i) cout<<" ";
        cout<<level[i];
    }

}
