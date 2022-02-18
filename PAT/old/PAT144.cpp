#include "iostream"
#include "unordered_map"
using namespace std;
unordered_map<int,bool> m;
int main(){
    int num;
    cin>>num;
    for (int i = 0; i < num; ++i) {
        int x; cin>>x;
        if(x>0){
            m[x] = true;
        }
    }
    int j = 1;
    while (j<=100010){
        if(!m[j]){
            cout<<j<<endl;
            return 0;
        }
        j++;
    }
}