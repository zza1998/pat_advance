//
// Created by 周子安 on 2021/8/12.
//
#include "iostream"
#include "vector"
#include "algorithm"
#include "set"
using namespace std;

struct Stu{
    int code, sRank;
    int score[2],choose[5];
};
struct Sch{
    int lastRank = -1;
    set<int >stus;
};
int cmp(const Stu&stu1,const Stu&stu2){
    int s1 = (stu1.score[0]+stu1.score[1])/2;
    int s2 = (stu2.score[0]+stu2.score[1])/2;
    if(s1!=s2){
        return s1>s2;
    }
    if(stu1.score[0]!=stu2.score[0]){
        return stu1.score[0]>stu2.score[0];
    }
    return stu1.code<stu2.code;
}
int app[120] = {0}, hasS[120]= {0};Sch schs[120];
vector<Stu> v;
int main(){
    int num,schNum,choNum;
    cin>>num>>schNum>>choNum;
    for (int i = 0; i < schNum; ++i) {
        cin>>app[i];
    }
    for (int i = 0; i < num; ++i) {
        Stu stu{};
        stu.code = i;
        cin>>stu.score[0]>>stu.score[1];
        for (int j = 0; j < choNum; ++j) {
            int sn;cin>>sn;
            stu.choose[j] = sn;
        }
        v.push_back(stu);
    }
    sort(v.begin(),v.end(),cmp);
    v[0].sRank = 1;
    for (int i = 1; i < v.size(); ++i) {
        if(v[i].score[0] == v[i-1].score[0]
            && v[i].score[1]==v[i-1].score[1]){
            v[i].sRank = v[i-1].sRank;
        } else{
            v[i].sRank = i+1;
        }
    }
    for (int i = 0; i < v.size(); ++i) {
        for (int j = 0; j < choNum; ++j) {
            int sno1 = v[i].choose[j];
            if(app[sno1]>0 || schs[sno1].lastRank == v[i].sRank){
                schs[sno1].lastRank = v[i].sRank;
                schs[sno1].stus.insert(v[i].code);
                app[sno1] -- ;
                hasS[sno1] = 1;
                break;
            }
        }
    }
    for (int i = 0; i < schNum; ++i) {
        if(hasS[i] == 1){
            int flag = 0;
            for (auto x:schs[i].stus) {
                if(flag == 1){
                    cout<<" ";
                }
                flag = 1;
                cout<<x;
            }
        }
        cout<<endl;
    }
}