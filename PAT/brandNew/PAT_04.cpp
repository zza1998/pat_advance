
#include "iostream"
#include "vector"
#include "queue"
using namespace std;
vector<int> nodes[110];
int adds[110];
int bfs(int root){
    queue<int> q;
    q.push(root);
    int last = root;
    int level = 0;
    int tmpLast ;
    while (!q.empty()){
        int cn = q.front();
        q.pop();
        vector<int> v = nodes[cn];
        if(v.empty()){
            adds[level]++;
        } else{
            for (int i = 0; i < v.size(); ++i) {
                q.push(v[i]);
                tmpLast = v[i];
            }
        }
        if(cn == last){
            if(level != 0) cout<<" ";
            cout<<adds[level];
            last = tmpLast;
            level++;
        }
    }
}
int main() {
    int all, node;
    cin >> all >> node;
    for (int i = 0; i < node; ++i) {
        int no, num; cin>>no>>num;
        if(no == 0) break;
        for (int j = 0; j < num; ++j) {
            int data;cin>>data;
            nodes[no].push_back(data);
        }
    }
    bfs(1);

}