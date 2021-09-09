#include "iostream"
#include "vector"
#include "queue"
#include "vector"
using namespace std;
int n , m;
int edges[100][100];
int visit[100];
vector<int> nabor[100];
struct node{
    int val;
    int dis;
    node(int val,int dis){
        this->val = val;
        this->dis = dis;
    }
    bool operator ()  (node *& n1, node *&n2){
        if(n1->dis!=n2->dis){
            return n1->dis<n2->dis;
        }
        return n1->val<n2->val;
    }
};
priority_queue<node,vector<node>> q;
int ori = 1;
void dijkstra(int curr){
    int min = 0x7ffffff;
    int minI = -1;
    vector<int> next = nabor[curr];
    for (int i = 0; i < n; ++i) {
        if(visit[i]== 0 && edges[curr][i] < min){
            minI = i;
            min = edges[curr][i];
        }
    }
    if(minI == -1) return;
    visit[minI] = 1;
    for (int i = 0; i < n; ++i) {
        if(visit[i] == 0 && edges[curr][minI] + edges[minI][i] < edges[curr][i]){
            edges[curr][i] = edges[curr][minI] + edges[minI][i];
        }
    }
}
int main(){
    cin>>n>>m;
    fill(edges[0],edges[0]+100*100,0x7ffffff);
    for (int i = 0; i < m; ++i) {
        int from,to,weight;
        cin>>from>>to>>weight;
        edges[from][to] = edges[to][from] = weight;
        nabor[from].push_back(to);
        nabor[to].push_back(from);
    }
    for (int i = 2; i <= n; ++i) {
        q.emplace(i,edges[ori][i]);
    }
    for (int i = 1; i <= n; ++i) {
        if(visit[i]==0){
            dijkstra(ori);
        }
    }
    for (int i = 2; i <= n; ++i) {
        printf("%d to %d dis:%d\n",ori,i,edges[ori][i]);
    }
}