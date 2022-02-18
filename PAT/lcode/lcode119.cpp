//
// Created by 周子安 on 2022/2/16.
//
#include "iostream"
#include "vector"
using namespace std;
vector<int> getRow(int rowIndex) {
    vector<int> v;
    v.push_back(1);
    if(rowIndex==0){
        return v;
    }
    for (int i = 2; i <= rowIndex+1; ++i) {
        vector<int> last;
        for (int j = 0; j < i; ++j) {
            if(j==0||j==i-1){
                last.push_back(1);
            } else{
                last.push_back(v[j-1]+v[j]);
            }
        }
        v = last;
    }
    return v;
}
int main(){

}