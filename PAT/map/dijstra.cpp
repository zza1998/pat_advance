#include "iostream"
#include "vector"
#include "queue"

using namespace std;
int n, m;
struct node;
int visit[100];
struct node {
    int val;
    int dis;
    node(int val, int dis) {
        this->val = val;
        this->dis = dis;
    }
    bool operator < (const node &n2) const {
        if (dis != n2.dis) {
            return dis > n2.dis;
        }
        return val> n2.val;
    }
};
vector<node> nabor[100];
priority_queue<node, vector<node>> q;
int ori = 1;
int dis[100];
void dijkstra() {
//    int min = 0x7ffffff;
//    int minI = -1;
//    vector<int> next = nabor[curr];
//    for (int i = 0; i < n; ++i) {
//        if (visit[i] == 0 && edges[curr][i] < min) {
//            minI = i;
//            min = edges[curr][i];
//        }
//    }
//    if (minI == -1) return;
//    visit[minI] = 1;
//    for (int i = 0; i < n; ++i) {
//        if (visit[i] == 0 && edges[curr][minI] + edges[minI][i] < edges[curr][i]) {
//            edges[curr][i] = edges[curr][minI] + edges[minI][i];
//        }
//    }
}
void dijkstraV2(){
    fill(dis,dis+100,0x777777);
    dis[ori] = 0;
    while (!q.empty()){
        node nd = q.top();
        q.pop();
        int nk = nd.val,nx = nd.dis;
        if(visit[nk]) continue;
        visit[nk] = 1;
        vector<node> v = nabor[nk];
        for (node nod : v) {
            if(!visit[nod.val] && nod.dis+nx<dis[nod.val]){
                dis[nod.val] = nod.dis+dis[nk];
                q.push(node(nod.val,dis[nod.val]));
            }
        }
    }
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        int from, to, weight;
        cin >> from >> to >> weight;
        nabor[from].emplace_back(to,weight);
        nabor[to].emplace_back(from,weight);
    }
    q.emplace(1, 0);
    dijkstraV2();
    for (int i = 2; i <= n; ++i) {
        printf("%d to %d dis:%d\n", ori, i, dis[i]);
    }
}