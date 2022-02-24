#include "iostream"
using namespace std;
int main(){
    int num;cin>>num;
    double arr[num];
    double sum = 0;
    for (int i = 0; i < num; ++i) {
        cin>>arr[i];
        sum+=arr[i] * (i+1)*(num-i);
    }
    printf("%.2f",sum);
}