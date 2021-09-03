#include "iostream"
#include "map"
using namespace std;
int main(){
    map<int,int> m;
    int n;
    cin>>n;
    int arr[n],minArr[n],maxArr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    minArr[n-1] = arr[n-1];
    for (int i = n-2; i >= 0; i--) {
        minArr[i] = min(arr[i],minArr[i+1]);
    }
    maxArr[0] = arr[0];
    if(arr[0] <= minArr[0] && arr[0]>= maxArr[0]){
        m[arr[0]] = 1;
    }
    for (int i = 1; i < n; ++i) {
        maxArr[i] = max(arr[i],maxArr[i-1]);
        if(arr[i] <= minArr[i] && arr[i]>= maxArr[i]){
            m[arr[i]] = 1;
        }
    }
    int flag = 0;
    if(!m.empty()){
        cout<<m.size()<<endl;
        for(auto item : m){
            if(flag){
                cout<<" ";
            }
            flag = 1;
            cout<<item.first;
        }
    } else{
        cout<<"0"<<endl;
        cout<<endl;
    }

}