//
// Created by 周子安 on 2021/8/19.
//

#include "vector"
#include "queue"
#include "iostream"
using namespace std;
vector<int> v[102];
int maxSize = 0,maxLevel;
int level = 1;
void bfs(){
    queue<int> q;
    q.push(1);
    while (!q.empty()){
        int ss = (int)q.size();
        if(ss>maxSize){
            maxSize = ss;
            maxLevel = level;
        }
        while (ss--){
            int f = q.front();
            vector<int> next = v[f];
            for (int i = 0; i < next.size(); ++i) {
                q.push(next[i]);
            }
            q.pop();
        }
        level++;
    }

}
int main(){
    int num, child;
    cin>>num>>child;
    for (int i = 0; i < child; ++i) {
        int code, cnum;
        cin>>code>>cnum;
        for (int j = 0; j < cnum; ++j) {
            int x;cin>>x;
            v[code].push_back(x);
        }
    }
    bfs();
    cout<<maxSize<<" "<<maxLevel<<endl;

}