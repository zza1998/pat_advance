#include "iostream"
#include "vector"

using namespace std;
int cap, num, to, edgeNum, lastTake = 0xfffffff, lastRemain;
int times[510][510], curr[510], visted[510];
vector<int> route, nodes[510];
int minSpend = 0x7fffffff;
void findWay(int cur, int spend, vector<int> &v,int take, int remain) {
    if (spend > minSpend) return;
    if (cur == to) {
        if (spend < minSpend) {
            route = v;
            minSpend = spend;
            lastTake = take;
            lastRemain = remain;
        }else if(spend == minSpend && take < lastTake){
            route = v;
            lastTake = take;
            lastRemain = remain;
        } else if(spend == minSpend && take == lastTake && remain<lastRemain){
            route = v;
            lastRemain = remain;
        }
        return;
    }
    vector<int> next = nodes[cur];
    for (int i : next) {
        if(visted[i] == 0){
            visted[i] = 1;
            v.push_back(i);
            int Ttake = take;
            int Tremain = remain + curr[i] - cap/2;
            if(Tremain<0){
                Ttake -=  Tremain;
                Tremain = 0;
            }
            findWay(i, spend+times[cur][i], v, Ttake, Tremain);
            v.pop_back();
            visted[i] = 0;
        }
    }
}

int main() {
    cin >> cap >> num >> to >> edgeNum;
    for (int i = 1; i <= num; ++i) {
        cin >> curr[i];
    }
    for (int i = 0; i < edgeNum; ++i) {
        int fr, tt, spend;
        cin >> fr >> tt >> spend;
        times[fr][tt] = times[tt][fr] = spend;
        nodes[fr].push_back(tt);
        nodes[tt].push_back(fr);
    }
    vector<int> vc;
    vc.push_back(0);
    findWay(0,0,vc,0,0);
    printf("%d ",lastTake);
    for (int i = 0; i < route.size(); ++i) {
        if(i) cout<<"->";
        cout<<route[i];
    }
    printf(" %d\n",lastRemain);
}