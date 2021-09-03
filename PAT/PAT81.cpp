//
// Created by 周子安 on 2021/8/24.
//
#include "iostream"
using namespace std;
int intr = 0,fen = 0,mu,zi = 0;
int maxy(int a,int b){
    if(b==0)return a;
    else  return maxy(b,a%b);
}
void addTo(int m,int z){
    int yu = z/m;
    intr+=yu;
    z -= yu*m;
    if(z != 0){
        if(fen == 0){
            mu = m;
            zi = z;
            fen = 1;
        } else{
            zi = m*zi+mu*z;
            mu = mu*m;
            intr += zi/mu;
            zi -= mu * (zi/mu);
            int x = maxy(zi,mu);
            mu/=x;zi/=x;
            if(mu==1){
                intr += zi;
                fen = 0;
            }
        }
    }
}
int main(){
    int n;cin>>n;
    for (int i = 0; i < n; ++i) {
        int a, b;
        scanf("%d/%d",&a,&b);
        addTo(b,a);
    }
    if(intr){
        cout<<intr;
    }
    if(zi){
        if(intr){
            cout<<" ";
        }
        cout<<zi<<"/"<<mu;
    }
    if(intr == 0 && zi == 0){
        cout<<0;
    }

}