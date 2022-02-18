#include "iostream"
#include "vector"
using namespace std;

int h,w;
int line [4] = {1,-1,0,0};
int line2 [4] = {0,0,1,-1};
void dfs(int a, int b, vector<vector<char>>& grid){
    if(a<0 || a>=h || b<0 || b>=w){
        return;
    }
    if(grid[a][b] == '0') return;
    grid[a][b] = '0';
    for (int i = 0; i < 4; ++i) {
        dfs(a+line[i],b+line2[i],grid);
    }
}
int numIslands(vector<vector<char>>& grid) {
    int num = 0;
    h = grid.size(); w = grid[0].size();
    for (int i = 0; i < grid.size(); ++i) {
        for (int j = 0; j < grid[0].size(); ++j) {
            if(grid[i][j] == '1'){
                num++;
                dfs(i,j,grid);
            }
        }
    }
    return num;
}

int main(){
    vector<vector<char>> v;
    vector<char> v1 = vector<char>{'1','1','1','1','0'};
    vector<char> v2 = vector<char>{'1','1','0','1','0'};
    vector<char> v3 = vector<char>{'1','1','0','0','0'};
    vector<char> v4 = vector<char>{'0','0','0','0','0'};
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    v.push_back(v4);

    cout<<numIslands(v);
}