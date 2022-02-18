#include "iostream"
#include "unordered_map"
#include "set"

using namespace std;
unordered_map<int,set<int>> inCmp;
int main(){
    int m,n;
    cin>>m>>n;
    for (int i = 0; i < m; ++i) {
        int a,b;cin>>a>>b;
        inCmp[a].insert(b);
        inCmp[b].insert(a);
    }
    for (int i = 0; i < n; ++i) {
        int num;cin>>num;
        unordered_map<int,int> goods;
        for (int j = 0; j < num; ++j) {
            int x; cin>>x;
            goods[x] = 1;
        }
        int isOk = 1;
        for (auto item : goods) {
            if(inCmp.find(item.first)!=inCmp.end()){
                set<int> inC = inCmp[item.first];
                for (int it:inC) {
                    if(goods.find(it)!=goods.end()){
                        isOk = 0;
                        break;
                    }
                }
                if(isOk==0) break;
            }
        }
        printf("%s\n",isOk?"Yes":"No");
    }
}