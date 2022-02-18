#include "iostream"
#include "map"
#include "vector"
#include "algorithm"
#include "set"
using namespace std;
int num;
set<int> v[1010];
int parent[1010];
int hobby[1010];
int cmp(pair<int,int> p1,pair<int,int> p2){
    return p1.second>=p2.second;
}
int findFather(int x){
    int a=x;
    while(x!=parent[x]) x=parent[x];
    //路径压缩
    while(a!=parent[a])
    {
        int z=a;
        a=parent[a];
        parent[z]=x;
    }
    return x;
}
void merge(int i,int j){
    int f1 = findFather(i);
    int f2 = findFather(j);
    if(f1!=f2){
        parent[f1] = f2;
    }
}

int main(){
    cin>>num;
    for (int i = 1; i <= num; ++i) {
        parent[i] = i;
    }
    for (int i = 1; i <= num; ++i) {
        int snum;
        scanf("%d:",&snum);
        for (int j = 0; j < snum; ++j) {
            int code; cin>>code;
            if(hobby[code] == 0){
                hobby[code] = i;
            } else{
                merge(i, hobby[code]);
            }
        }
    }

    map<int,int> m;
    for (int i = 1; i <= num; ++i) {
        m[findFather(i)]++;
    }
    cout<<m.size()<<endl;
    vector<pair<int,int>> pr(m.begin(),m.end());
    sort(pr.begin(),pr.end(),cmp);
    for (int i = 0; i < pr.size(); ++i) {
        if(i) cout<<" ";
        cout<<pr[i].second;
    }
    cout<<endl;
}