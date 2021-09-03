
#include "iostream"
#include "queue"
using namespace std;
// start 5:00 end
int m, n, l, t;
int px[80][1300][200];
bool visit[80][1300][200];
int sum = 0;
struct Node{
    int x{},y{},z{};
    Node() = default;
    Node(int x1,int x2,int x3){
        x=x1;y=x2;z=x3;
    }
};
void travel(int v1, int v2, int v3, int &k);
void findVist() {
    for (int i = 0; i < l; ++i) {
        for (int j = 0; j < m; ++j) {
            for (int k = 0; k < n; ++k) {
                if (!visit[i][j][k] && px[i][j][k] == 1) {
                    int ok = 0;
                    travel(i,j,k,ok);
                    if(ok>=t){
                        sum+=ok;
                    }
                }
            }
        }
    }
}
int xp[6] = {1,-1,0,0,0,0};
int yp[6] = {0,0,1,-1,0,0};
int zp[6] = {0,0,0,0,1,-1};
void travel(int v1, int v2, int v3, int &k) {
    queue<Node> q;
    Node node = Node(v1,v2,v3);
    visit[v1][v2][v3] = true;
    q.push(node);
    while (!q.empty()){
        Node first = q.front();
        q.pop();
        k++;
        for (int i = 0; i < 6; ++i) {
            int x = first.x+xp[i];
            int y = first.y+yp[i];
            int z = first.z+zp[i];
            if(x < 0 || x >= l || y < 0 || y >= m || z < 0 || z >= n || visit[x][y][z] || px[x][y][z] == 0){
                continue;
            }
            visit[x][y][z] = true;
            Node next = Node(x,y,z);
            q.push(next);
        }
    }
}

int main() {
    cin >> m >> n >> l >> t;
    for (int i = 0; i < l; ++i) {
        for (int j = 0; j < m; ++j) {
            for (int k = 0; k < n; ++k) {
                cin >> px[i][j][k];
            }
        }
    }
    findVist();
    cout << sum;

}