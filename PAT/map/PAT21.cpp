#include "iostream"
#include "vector"
#include "set"
using namespace std;
vector<int> v[10010];
bool visited[10010];
int num;
vector<int> qian;
void travel(int curr){
    if(visited[curr]){
        return;
    }
    visited[curr] = true;
    vector<int> nextV = v[curr];
    int tnum = 0;
    for (int i : nextV) {
        if(!visited[i]){
            travel(i);
            tnum++;
        }
    }
    if(tnum == 0){
        qian.push_back(curr);
    }
}
int judge(){
    fill(visited,visited+num, false);
    int times = 0;
    for (int i = 1; i <= num; ++i) {
        if(!visited[i]){
            qian.push_back(i);
            travel(i);
            times++;
        }
    }
    return times;
}
set<int> qV; int maxDep = 0;
void dfs(int curr,int dep){
    if(dep>maxDep){
        maxDep = dep;
        qV.clear();
        qV.insert(curr);
    } else if(dep == maxDep){
        qV.insert(curr);
    }
    visited[curr] = true;
    vector<int> vv = v[curr];
    for (int i = 0; i < vv.size(); ++i) {
        if(!visited[vv[i]]){
            visited[vv[i]] = true;
            dfs(vv[i],dep+1);
            visited[vv[i]] = false;
        }
    }
}
int main(){
    cin>>num;
    v->resize(num+10);
    for (int i = 0; i < num-1; ++i) {
        int from,to;
        cin>>from>>to;
        v[from].push_back(to);
        v[to].push_back(from);
    }
    int nums = judge();
    if(nums>1){
        printf("Error: %d components\n",nums);
    } else{
        int j = 0;
        for (int i = 0; i < qian.size(); ++i) {
            if(qV.find(qian[i])!=qV.end() && j++>1) continue;
            fill(visited,visited+num+10,false);
            dfs(qian[i],1);
        }
        for(auto item : qV){
            cout<<item<<endl;
        }
    }

}