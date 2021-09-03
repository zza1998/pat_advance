#include "iostream"
#include "algorithm"
using namespace std;
long nums[100010];
int p, num ,maxLen = 0;
void szz(){
    int i=0,j=0;
    while (i<num&&j<num){
        long cmp = nums[i]*p;
        if(cmp>=nums[j]){
            j++;
            maxLen = max(maxLen,j-i);
        } else{
            i++;j++;
        }
    }
}
int main(){
    cin>>num>>p;
    for (int i = 0; i < num; ++i) {
        int g;cin>>g;
        nums[i] = g;
    }
    sort(nums,nums+num);
    szz();
    cout<<maxLen<<endl;
}