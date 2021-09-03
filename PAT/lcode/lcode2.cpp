//
// Created by 周子安 on 2021/8/20.
//

#include "iostream"
#include "vector"
using namespace std;
struct node{
    int in,out;
};
bool cmp(const node &a, const node &b){
    return a.out!=b.out ? a.out<b.out : a.in>b.in;
}
int main(){
    //freopen("in.txt","r",stdin);
    int n,h1,m1,s1,h2,m2,s2,sum=1;
    scanf("%d",&n);
    vector<node>a(n);
    for(int i=0;i<n;i++){
        scanf("%d:%d:%d %d:%d:%d",&h1,&m1,&s1,&h2,&m2,&s2);
        a[i].in=h1*3600+m1*60+s1;
        a[i].out=h2*3600+m2*60+s2;
    }
    sort(a.begin(),a.end(),cmp);
    int last=a[0].out;
    for(int i=1;i<n;i++){
        if(a[i].in>=last){
            sum++;
            last=a[i].out;
        }
    }
    printf("%d",sum);
    return 0;
}