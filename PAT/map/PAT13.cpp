#include "iostream"
#include "vector"
using namespace std;
int m,n,k;
int checked;
bool visited[1010];
vector<int> v[1010];
int times = 0;
void travel(int curr){
    if(visited[curr]){
        return; 
    }
    visited[curr] = true;
    vector<int> vv = v[curr];
    for (int i = 0; i < vv.size(); ++i) {
        if(!visited[vv[i]]&&vv[i]!=checked)
        travel(vv[i]);
    }
}
void judge(){
    fill(visited,visited+1010,false);
    times = 0;
    for (int i = 1; i <= m; ++i) {
        if(!visited[i] && i!=checked){
            travel(i);
            times++;
        }
    }
}
int main(){
   cin>>m>>n>>k;
    for (int i = 0; i < n; ++i) {
        int from,to;
        cin>>from>>to;
        v[from].push_back(to);
        v[to].push_back(from);
    }
    for (int i = 0; i < k; ++i) {
        cin>>checked;
        judge();
        cout<<times-1<<endl;
    }
}