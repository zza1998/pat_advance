//
// Created by 周子安 on 2022/2/15.
//

#include "iostream"
#include "vector"
using namespace std;
int point[520],vis[520];
int p, road, from, to, roads=0, maxP = 0;
int edges[520][520];
vector<int> v[520];
int maxSpend = 0xfffffff;
void dsf(int ori,int spend,int people){
    if(ori == to){
        if(spend < maxSpend){
            roads = 1;
            maxSpend = spend;
            maxP = people+point[to];
        } else if(spend == maxSpend){
            roads++;
            maxP = max(maxP,people+point[to]);
        }
        return;
    }

    vector<int> vs = v[ori];
    for (int i = 0; i < vs.size(); ++i) {
        if(vis[vs[i]]){
            continue;
        }
        vis[vs[i]] = 1;
        dsf(vs[i],spend+edges[ori][vs[i]],people+point[ori]);
        vis[vs[i]] = 0;
    }
}
int main() {
    cin >> p >> road >> from >> to;
    for (int i = 0; i < p; ++i) {
        cin >> point[i];
    }
    for (int i = 0; i < road; ++i) {
        int f, t, len;
        cin >> f >> t >> len;
        edges[f][t] = edges[t][f] = len;
        v[f].push_back(t);
        v[t].push_back(f);
    }
    vis[from] = 1;
    dsf(from,0,0);
    cout<<roads<<" "<<maxP;

}