#include "iostream"
#include "cmath"
using namespace std;
int m,n;
int edge[210][210];
int main(){
    cin>>m>>n;
    for (int i = 0; i < n; ++i) {
        int from,to,dis;
        cin>>from>>to>>dis;
        edge[from][to] = edge[to][from] = dis;
    }
    int checked;cin>>checked;
    int shorted = 0x7fffffff, index=0;
    for (int i = 1; i <= checked; ++i) {
        int num;cin>>num;
        int arr[num],isBroken = 0;
        int tch[m+1];
        fill(tch,tch+m+1,0);
        cin>>arr[0];
        tch[arr[0]]++;
        int len = 0;
        for (int j = 1; j < num; ++j) {
            cin>>arr[j];
            if(j==num-1){
                if(arr[j] != arr[0]){
                    tch[arr[j]]++;
                }
            } else{
                tch[arr[j]]++;
            }
            len+=edge[arr[j-1]][arr[j]];
            if(edge[arr[j-1]][arr[j]] == 0){
                isBroken = 1;
            }
        }
        if(isBroken){
            printf("Path %d: NA (Not a TS cycle)\n",i);
            continue;
        }
        if(arr[0]!=arr[num-1]){
            printf("Path %d: %d (Not a TS cycle)\n",i,len);
            continue;
        }
        bool isF = false; int dou = 0;
        for (int j = 1; j <= m; ++j) {
            if(tch[j] == 0){
                isF = true;
                printf("Path %d: %d (Not a TS cycle)\n",i,len);
                break;
            } else if(tch[j]>=2){
                dou++;
            }
        }
        if(!isF){
            if(dou){
                printf("Path %d: %d (TS cycle)\n",i,len);
            } else{
                printf("Path %d: %d (TS simple cycle)\n",i,len);
            }
            if(len<shorted){
                index = i;
                shorted = len;
            }
        }
    }
    printf("Shortest Dist(%d) = %d\n",index,shorted);
}