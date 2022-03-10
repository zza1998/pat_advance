#include "iostream"
#include "map"
#include "set"
using namespace std;
map<string,string > m;
set<string > guest,singe;
int main(){
    int N; cin>>N;
    for (int i = 0; i < N; ++i) {
        string a,b;cin>>a>>b;
        m[a] = b;
        m[b] = a;
    }
    int M ; cin>>M;
    for (int i = 0; i < M; ++i) {
        string u;cin>>u;
        guest.insert(u);
    }
    for(const auto& it:guest){
        if(m.count(it)!=0 && guest.count(m[it])!=0){
            continue;
        }
        singe.insert(it);
    }
    printf("%d\n",(int)singe.size());
    int flag = 0;
    for (const auto& it:singe) {
        if(flag==1){
            cout<<" ";
        }
        flag = 1;
        printf("%s",it.c_str());
    }
}