#include "iostream"
using namespace std;
int num;
int arr[1010];
void qsort(int from, int to){
    if(from>to) return;
    int i = from,j = to;
    int tmp = arr[i];
    while (i<j){
        while (arr[j]>=tmp && i<j){
            j--;
        }
        if(i<j){
            arr[i++]= arr[j];
        }
        while (arr[i]<tmp && i<j){
            i++;
        }
        if(i<j)
        arr[j--] = arr[i];
    }
    arr[i] = tmp;
    qsort(from,i-1);
    qsort(i+1,to);
}
int main(){
    cin>>num;
    for (int i = 0; i < num; ++i) {
        cin>>arr[i];
    }
    qsort(0,num-1);
    for (int i = 0; i < num; ++i) {
        if(i) cout<<" ";
        cout<<arr[i];
    }

}