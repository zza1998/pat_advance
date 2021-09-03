//
// Created by 周子安 on 2021/8/5.
//

#include "iostream"
#include "map"
using namespace std;
int main(){
    int num, match;
    map<int,int> m;
    cin>>num>>match;
    for (int i = 0; i < num; ++i) {
        int key;cin>>key;
        m[key]++;
    }
    for(auto it:m){
        if(m.find(match-it.first)!=m.end()){
            if(match - it.first == it.first && it.second<2)continue;
            cout<<it.first<<" "<<match-it.first<<endl;
            return 0;
        }
    }
    cout<<"No Solution"<<endl;
}