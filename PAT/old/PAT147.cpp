#include "iostream"
using namespace std;
int flag = 0;
void postVisit(int arr[],int curr, int num){
    if(curr>num) return;
    if(curr*2<=num){
        postVisit(arr, curr*2,num);
    }
    if(curr*2+1<=num){
        postVisit(arr, curr*2+1,num);
    }
    if(flag)cout<<" ";
    flag = 1;
    cout<<arr[curr];
}
int main(){
    int checkNum,num;
    cin>>checkNum>>num;
    int arr[num+1];
    for (int i = 0; i < checkNum; ++i) {
        for (int j = 1; j <= num; ++j) {
            cin>>arr[j];
        }
        int maxNum = 0; int minNum = 0;
        for (int j = 1; j <= num/2; ++j) {
            if(arr[j]>=arr[2*j] && (2*j+1 > num || arr[j]>=arr[2*j+1]) ){
                maxNum++;
            }
            if(arr[j]<=arr[2*j] && (2*j+1 > num || arr[j]<=arr[2*j+1]) ){
                minNum++;
            }
        }
        if(maxNum == num/2){
            cout<<"Max Heap"<<endl;
        } else if(minNum == num/2){
            cout<<"Min Heap"<<endl;
        } else{
            cout<<"Not Heap"<<endl;
        }
        flag = 0;
        postVisit(arr,1,num);
        cout<<endl;
    }
}