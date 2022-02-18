//
// Created by 周子安 on 2021/8/4.
//

#include "iostream"
using namespace std;
int main(){
    double win = 1;
    for (int i = 0; i < 3; ++i) {
        double w,l,t;
        cin>>w>>l>>t;
        if(w>l&&w>t){
            win*=w;
            cout<<"W ";
        }else if (l>w&&l>t){
            win*=l;
            cout<<"T ";
        } else if(t>l&&t>w){
            win*=t;
            cout<<"L ";
        }
    }
    win = (win*0.65-1)*2;
    printf("%.2f",win);
}
