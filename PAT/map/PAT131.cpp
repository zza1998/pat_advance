#include "iostream"
#include "vector"
#include "map"

using namespace std;
map<int, int> lineMap, visit;
vector<int> finalPath;
vector<int> vs[10010];
int first, last, minChange, minLen = 0x7ffffff;
void dfs(int curr, int change, vector<int> &minPath) {
    if (minPath.size() > minLen) return;
    if (curr == last) {
        if (minPath.size() < minLen) {
            finalPath = minPath;
            minChange = change;
            minLen = (int) finalPath.size();
        } else if (minPath.size() == minLen && change < minChange) {
            finalPath = minPath;
            minChange = change;
        }
        return;
    }
    for (auto it : vs[curr]) {
        if (visit[it] != 1) {
            visit[it] = 1;
            minPath.push_back(it);
            int add = 0;
            if (minPath.size() >= 3) {
                int line1 = lineMap[minPath[minPath.size() - 2] * 10000 + minPath[minPath.size() - 1]];
                int line2 = lineMap[minPath[minPath.size() - 3] * 10000 + minPath[minPath.size() - 2]];
                if (line1 != line2) {
                    add = 1;
                }
            }
            change += add;
            dfs(it, change, minPath);
            change -= add;
            visit[it] = 0;
            minPath.pop_back();
        }
    }
}

int main() {
    int num;
    cin >> num;
    for (int i = 1; i <= num; ++i) {
        int nodeNum;
        cin >> nodeNum;
        int pre;
        cin >> pre;
        for (int j = 1; j < nodeNum; ++j) {
            int val;
            cin >> val;
            int fr = pre * 10000 + val;
            int se = val * 10000 + pre;
            vs[val].push_back(pre);
            vs[pre].push_back(val);
            pre = val;
            lineMap[fr] = lineMap[se] = i;
        }
    }
    int check;
    cin >> check;
    for (int i = 0; i < check; ++i) {
        cin >> first >> last;
        vector<int> mv;
        visit.clear();
        minLen = 0x7ffffff;
        mv.push_back(first);
        dfs(first, 0, mv);
        int currline = lineMap[first * 10000 + finalPath[1]];
        int lastNode = first;
        cout << finalPath.size() - 1 << endl;
        for (int j = 1; j < finalPath.size(); ++j) {
            if (lineMap[finalPath[j - 1] * 10000 + finalPath[j]] != currline) {
                printf("Take Line#%d from %04d to %04d.\n", currline, lastNode, finalPath[j - 1]);
                currline = lineMap[finalPath[j - 1] * 10000 + finalPath[j]];
                lastNode = finalPath[j - 1];
            }
        }
        printf("Take Line#%d from %04d to %04d.\n", currline, lastNode, finalPath[finalPath.size()-1]);
    }

}