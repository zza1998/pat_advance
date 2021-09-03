#include "iostream"
#include "vector"
using namespace std;
int main(){
    int num, match;
    cin>>num>>match;
    int nums[100010] = {0};
    for (int i = 1; i <= num; ++i) {
        int in;cin>>in;
        nums[i] = in + nums[i-1];
    }
    int i = 1, j = 1, rem = nums[num]+1;
    vector<int> v;
    while (j<=num&&i<=num){
        int cut = nums[j] - nums[i-1];
        if(cut >= match){
            if(cut-match<rem){
                v.clear();
                v.push_back(i);
                v.push_back(j);
                rem = cut - match;
                i++;
            } else if(cut-match == rem){
                v.push_back(i);
                v.push_back(j);
                j++;
            } else{
                if(i==j){
                    j++;
                } else {
                    i++;
                }
            }
        }else {
            j++;
        }
    }
    for (int k = 0; k < v.size(); k+=2) {
        cout<<v[k]<<"-"<<v[k+1]<<endl;
    }

}