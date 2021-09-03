//
// Created by 周子安 on 2021/8/23.
//
#include "iostream"
#include "vector"
using namespace std;
const int M = 510;
const int INF = 999999999;
int n,m,from,to,minDis,minDis_Time=INF,minTime,minTime_intr = INF;
int lengths[M][M],times[M][M];
vector<int> minDisV,minTimeV;
int mDis[M],mTime[M],disPre[M],pre_Time[M],timePre[M],pre_Node[M]; bool disVist[M],timeVist[M];
void dijkstra_dis(){
    // 寻找最短节点
    int minI = -1,minD = INF;
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
                disPre[i] = minI;
                pre_Time[i] = pre_Time[minI] + times[minI][i];
            } else if(mDis[minI] + lengths[minI][i] == mDis[i] && pre_Time[minI] + times[minI][i] < pre_Time[i]){
                disPre[i] = minI;
                pre_Time[i] = pre_Time[minI] + times[minI][i];
            }
        }
    }
    disVist[minI] = true;
}
void dijkstra_time(){
    // 寻找最短节点
    int minI = -1,minD = INF;
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
                timePre[i] = minI;
                pre_Node[i] = pre_Node[minI] + 1;
            } else if(mTime[minI] + times[minI][i] == mTime[i] && pre_Node[minI] + 1 < pre_Node[i]){
                timePre[i] = minI;
                pre_Node[i] = pre_Node[minI] + 1;
            }
        }
    }
    timeVist[minI] = true;

}
void del_pre_time(int cc){
    minTimeV.push_back(cc);
    if(timePre[cc]==from){
        return;
    }
    del_pre_time(timePre[cc]);
}
void del_pre_dis(int cc){
    minDisV.push_back(cc);
    if(disPre[cc]==from){
        return;
    }
    del_pre_dis(disPre[cc]);
}
int main(){
    cin>>n>>m;
    fill(lengths[0], lengths[0]+ M * M, -1);
    fill(times[0],times[0]+ M*M,-1);
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
    for (int i = 0; i < M; ++i) {
        timePre[i] = i;
        disPre[i] = i;
    }
    fill(pre_Time,pre_Time+M,INF);
    fill(pre_Node,pre_Node+M,INF);
    fill(mDis,mDis+M,INF);
    mDis[from] = 0;
    fill(disVist,disVist+M, false);
    for (int i = 0; i < n; ++i) {
        dijkstra_dis();
    }
    fill(mTime,mTime+M,INF);
    mTime[from] = 0;
    fill(timeVist,timeVist+M, false);
    for (int i = 0; i < n; ++i) {
        dijkstra_time();
    }
    minDis = mDis[to]; minTime = mTime[to];
    del_pre_time(to);
    del_pre_dis(to);
    if(minDisV==minTimeV){
        printf("Distance = %d; Time = %d: %d",minDis,minTime,from);
        for (int i = (int)minDisV.size()-1; i >=0; i--) {
            cout<<" -> "<<minDisV[i];
        }
        cout<<endl;
    } else{
        printf("Distance = %d: %d",minDis,from);
        for (int i = (int)minDisV.size()-1; i >=0; i--) {
            cout<<" -> "<<minDisV[i];
        }
        cout<<endl;
        printf("Time = %d: %d",minTime,from);
        for (int i = (int)minTimeV.size()-1; i >=0; i--) {
            cout<<" -> "<<minTimeV[i];
        }
        cout<<endl;
    }

}