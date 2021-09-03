//
// Created by 周子安 on 2021/8/23.
//
#include "iostream"
#include "vector"
using namespace std;
const int M = 510;
int n,m,from,to,minDis,minDis_Time=99999999,minTime,minTime_intr = 99999999;
int lengths[M][M],times[M][M];
vector<int> minDisV,minTimeV;
int mDis[M],mTime[M]; bool disVist[M],timeVist[M];
void dijkstra_dis(){
    // 寻找最短节点
    int minI = -1,minD = 99999999;
    for (int i = 0; i < n; ++i) {
        if(!disVist[i]&&mDis[i]<minD){
            minI = i;
            minD = mDis[i];
        }
    }
    // 没有最短的了
    if(minI == -1){
        return;
    }
    for (int i = 0; i < n; ++i) {
        if(!disVist[i] && lengths[minI][i]!=-1){
            if(mDis[minI] + lengths[minI][i] < mDis[i]){
                mDis[i] = mDis[minI] + lengths[minI][i];
            }
        }
    }
    disVist[minI] = true;
}
void dijkstra_time(){
    // 寻找最短节点
    int minI = -1,minD = 99999999;
    for (int i = 0; i < n; ++i) {
        if(!timeVist[i]&&mTime[i]<minD){
            minI = i;
            minD = mTime[i];
        }
    }
    // 没有最短的了
    if(minI == -1){
        return;
    }
    for (int i = 0; i < n; ++i) {
        if(!timeVist[i] && times[minI][i]!=-1){
            if(mTime[minI] + times[minI][i] < mTime[i]){
                mTime[i] = mTime[minI] + times[minI][i];
            }
        }
    }
    timeVist[minI] = true;
}
bool dfs_vist[M], dfs_vist2[M];
void dfs_dis(int cur,vector<int> &v,int dis,int flag){
    if(dis > minDis || flag > minDis_Time){
        return;
    }else if(dis == minDis){
        if(cur == to){
            if(minDisV.empty() || flag<minDis_Time){
                minDisV = v;
                minDis_Time = flag;
            }
        }
        return;
    }
    dfs_vist[cur] = true;
    for (int i = 0; i < n; ++i) {
        if(!dfs_vist[i] && lengths[cur][i] != - 1){
            dfs_vist[i] = true;
            v.push_back(i);
            dfs_dis(i,v,dis+lengths[cur][i],flag+times[cur][i]);
            dfs_vist[i] = false;
            v.pop_back();
        }
    }
}
void dfs_time(int cur, vector<int> &v, int tim, int flag){
    if(tim > minTime || flag > minTime_intr){
        return;
    }else if(tim == minTime){
        if(cur == to){
            if(minTimeV.empty() || flag<minTime_intr){
                minTimeV = v;
                minTime_intr = flag;
            }
        }
        return;
    }
    dfs_vist2[cur] = true;
    for (int i = 0; i < n; ++i) {
        if(!dfs_vist2[i] && times[cur][i] != - 1){
            dfs_vist2[i] = true;
            v.push_back(i);
            dfs_time(i, v, tim + times[cur][i], flag+1);
            dfs_vist2[i] = false;
            v.pop_back();
        }
    }
}
int cmpV(){
    if(minDisV.size()!=minTimeV.size()) return 0;
    for (int i = 0; i < minDisV.size(); ++i) {
        if(minDisV[i]!=minTimeV[i]){
            return 0;
        }
    }
    return 1;
}
int main(){
    cin>>n>>m;
    fill(lengths[0], lengths[0]+ M * M, -1);
    fill(times[0],times[0]+M*M,-1);
    for (int i = 0; i < m; ++i) {
        int v1,v2,ow,l,t;
        cin>>v1>>v2>>ow>>l>>t;
        lengths[v1][v2] = l;
        times[v1][v2] = t;
        if(ow==0){
            lengths[v2][v1] = l;
            times[v2][v1] = t;
        }
    }
    cin>>from>>to;
    fill(mDis,mDis+M,999999999);
    for (int i = 0; i < n; ++i) {
        if(lengths[from][i] != -1){
            mDis[i] = lengths[from][i];
        }
    }
    disVist[from] = true;
    for (int i = 0; i < n; ++i) {
        dijkstra_dis();
    }

    fill(mTime,mTime+M,999999999);
    for (int i = 0; i < n; ++i) {
        if(times[from][i] != -1){
            mTime[i] = times[from][i];
        }
    }
    timeVist[from] = true;
    for (int i = 0; i < n; ++i) {
        dijkstra_time();
    }
    minDis = mDis[to]; minTime = mTime[to];
    vector<int> v1,v2;
    dfs_dis(from,v1,0,0);
    dfs_time(from,v2,0,0);
    if(cmpV()){
        printf("Distance = %d; Time = %d: %d",minDis,minTime,from);
        for (int i : minDisV) {
            cout<<" -> "<<i;
        }
        cout<<endl;
    } else{
        printf("Distance = %d: %d",minDis,from);
        for (int i : minDisV) {
            cout<<" -> "<<i;
        }
        cout<<endl;
        printf("Time = %d: %d",minTime,from);
        for (int i : minTimeV) {
            cout<<" -> "<<i;
        }
        cout<<endl;
    }

}