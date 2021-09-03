#include "iostream"
#include "vector"
using namespace std;
int main(){

}
int parent[1001];
int findParent(int x){
    int f = x;
    while (parent[f]!=f){
        f = parent[f];
    }
    parent[x] = f;
    return f;
}
void unionIt(int a,int b){
    int f1 = findParent(a);
    int f2 = findParent(b);
    parent[f1] = f2;
    parent[a] = f2;
    parent[b] = f2;
}
vector<int> findRedundantConnection(vector<vector<int>>& edges) {
    for (int i = 0; i < edges.size(); ++i) {
        parent[i] = i;
    }
    vector<int> res;
    for(vector<int> edge:edges){
        int from = edge[0],to = edge[1];
        if(findParent(from) == findParent(to)){
            res.push_back(from);
            res.push_back(to);
            return res;
        } else{
            unionIt(from,to);
        }
    }
    return res;
}