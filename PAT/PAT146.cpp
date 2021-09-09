#include "iostream"
#include "vector"
#include "set"
using namespace std;
set<int> shou[1010];
int sArr[1010];
vector<int> fa[1010];
int main() {
    int vNum, edgeNum;
    cin >> vNum >> edgeNum;
    for (int i = 0; i < edgeNum; ++i) {
        int from, to;
        cin >> from >> to;
        shou[to].insert(from);
        fa[from].push_back(to);
    }
    int check;cin>>check;
    int first = 0;
    for (int i = 0; i < check; ++i) {
        vector<int> path;
        for (int j = 1; j <= vNum; ++j) {
            int x;cin>>x;
            path.push_back(x);
        }
        for (int j = 1; j <=vNum; ++j) {
            sArr[j] = (int)shou[j].size();
        }
        int flag = 1;
        for (int j = 0; j < vNum; ++j) {
            if(sArr[path[j]] != 0){
                flag = 0;
                break;
            } else{
                vector<int> v = fa[path[j]];
                for (int k = 0; k < v.size(); ++k) {
                    sArr[v[k]] --;
                }
            }
        }
        if(flag == 0) {
            if(first) cout<<" ";
            cout<<i;
            first = 1;
        }
    }

}