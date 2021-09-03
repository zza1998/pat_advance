//
// Created by 周子安 on 2021/8/19.
//

#include "iostream"
using namespace std;
struct Node{
    int left, right;
};
int n;
int node[1010];
bool isPre(int curr, int left, int right){
    if(left>right) return true;
    int x = node[curr];
    int i = left;
    for (; i < right; ++i) {
        if(node[i]>x){
            break;
        }
    }
    int flag = 1;
    for (int j = i; j < right; ++j) {
        if(node[j]<x){
            flag = 0;
            break;
        }
    }
    if(flag==0) return false;
    else{
        return isPre(left+1,left+1,i)&& isPre(i,i,right);
    }
}
int main(){
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>node[i];
    }
    if(isPre(0,0,n)){

    } else if(isPre(0,0,0)){

    } else{
        cout<<"NO"<<endl;
    }

}