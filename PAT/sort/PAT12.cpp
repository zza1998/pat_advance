//
// Created by 周子安 on 2021/8/9.
//
#include <utility>

#include "iostream"
#include "unordered_map"
#include <algorithm>
#include "vector"
using namespace std;
struct Stu{
    string code;
    int flags[4]{}, ranks[4]{};
    int best;
};
int ind = -1;
bool cmpA(const Stu &stu1, const Stu &stu2){
    return stu1.flags[ind]>stu2.flags[ind];
}
int main(){
    int exsit[1000000] = {0};
    vector<Stu> stuV;
    int num, match;
    cin>>num>>match;
    for (int i = 0; i < num; ++i) {
        Stu stu;string code; int c,m,e;
        cin >> code >> c >> m >> e;
        stu.code = code;
        stu.flags[0] = (c + m + e )/3.0 + 0.5;;
        stu.flags[1] = c;
        stu.flags[2] = m;
        stu.flags[3] = e;
        stuV.push_back(stu);
    }
    for (ind = 0;ind <=3; ind++) {
        sort(stuV.begin(),stuV.end(),cmpA);
        int rank = 1;
        stuV[0].ranks[ind] = 1;
        for (int j = 1; j < num; ++j) {
            if(stuV[j].flags[ind] != stuV[j-1].flags[ind]){
                rank = j+1;
            }
            stuV[j].ranks[ind] = rank;
        }
    }
    char cl[5] = {'A','C','M','E'};
    for (int i = 0; i < num; ++i) {
        stuV[i].best = 0;
        int minn = stuV[i].ranks[0];
        for(int j = 1; j <= 3; j++) {
            if(stuV[i].ranks[j] < minn) {
                minn = stuV[i].ranks[j];
                stuV[i].best = j;
            }
        }
    }
    for (int i = 0; i < num; ++i) {
        exsit[stoi(stuV[i].code)]=i+1;
    }
    for (int k = 0; k < match; ++k) {
        int u; cin>>u;
        int exit = exsit[u];
        if(exit){
            int best =stuV[exit-1].best;
            cout<<stuV[exit-1].ranks[best]<<" "<<cl[best]<<endl;
        } else{
            cout<<"N/A"<<endl;
        }
    }




}