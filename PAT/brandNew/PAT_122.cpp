#include "iostream"
#include "set"
using namespace std;

bool edge[210][210];
int main(){
    int N,M;cin>>N>>M;
    for (int i = 0; i < M; ++i) {
        int from, to;
        cin>>from>>to;
        edge[from][to] = true;
        edge[to][from] = true;
    }
    int num;cin>>num;
    for (int i = 0; i < num; ++i) {
        int Nn;cin>>Nn;
        bool res = true;
        set<int> st;
        int first; cin>>first;
        int pre = first;
        st.insert(pre);
        for (int j = 1; j < Nn; ++j) {
            int val; cin>>val;
            st.insert(val);
            if(!edge[pre][val]){
                res = false;
            }
            pre = val;
        }
        if(Nn!=N+1 || pre!=first || st.size()!=N){
            res = false;
        }
        if(res){
            cout<<"YES"<<endl;
        } else{
            cout<<"NO"<<endl;
        }
    }
}