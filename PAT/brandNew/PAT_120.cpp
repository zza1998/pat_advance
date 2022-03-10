#include "iostream"
#include "map"

using namespace std;

int main() {
    int N;
    cin >> N;
    map<int,int> m;
    for (int i = 0; i < N; ++i) {
        string num;
        cin >> num;
        int con = 0;
        for (int j = 0; j < num.size(); ++j) {
            con+=num[j] - '0';
        }
        m[con]++;
    }
    cout<<m.size()<<endl;
    int flag = 0;
    for(auto it: m){
        if(flag == 1){
            cout<<" ";
        }
        flag = 1;
        cout<<it.first;
    }
}