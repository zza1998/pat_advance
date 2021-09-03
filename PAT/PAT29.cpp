#include "iostream"
using namespace std;
int main(){
    long arr[2][201000];
    int x[2];
    for (int i = 0; i < 2; ++i) {
        int n1;cin>>n1;
        x[i] = n1;
        for (int j = 0; j < n1; ++j) {
            cin>>arr[i][j];
        }
    }
    int mid = (x[0]+x[1]-1)/2;
    int p1=0,p2=0,sum=-1; long result;
    while (sum<mid){
        if(p1 == x[0] && p2 < x[1]){
            result = arr[1][p2];
            p2++;
        } else if(p2 == x[1] && p1 < x[0]){
            result = arr[0][p1];
            p1++;
        }else if(arr[0][p1]<arr[1][p2]){
            result = arr[0][p1];
            p1++;
        }else{
            result = arr[1][p2];
            p2++;
        }
        sum++;
    }
    cout<<result;
}
