//
// Created by 周子安 on 2021/8/2.
//

#include "iostream"
#include "map"
using namespace std;
int main(){
    int num1,num2; double xi[1001] = {0};
    //fill(xi,xi+1001,0);
    cin>>num1;
    for (int i = 0; i < num1; ++i) {
        int x; double m;
        cin>>x>>m;
        xi[x] = m;
    }
    cin>>num2;
    for (int i = 0; i < num2; ++i) {
        int x; double m;
        cin>>x>>m;
        xi[x]+=m;
    }
    int addnum = 0;
    for (int i = 0; i < 1001; ++i) {
        if(xi[i] != 0){
            addnum ++ ;
        }
    }
    cout<< addnum;
    for (int i = 1000; i >= 0; i--) {
        if(xi[i] != 0){
            //cout<<" "<<i<<" ";
            printf(" %d %.1lf",i,xi[i]);
        }
    }

}
