//
// Created by 周子安 on 2021/8/11.
//
#include "iostream"
#include "vector"
#include "unordered_map"
#include "algorithm"
using namespace std;
struct Stu{
    string code;
    int score{};
    int f_rank{},l_num{},l_rank{};
};
bool cmpS(const Stu &s1,const Stu &s2){
    if(s1.score != s2.score){
        return s1.score>s2.score;
    }
    return s1.code<=s2.code;
}
int main(){
    vector<Stu> sv;
    unordered_map<string,Stu> m;
    int num;cin>>num;
    for (int i = 1; i <= num; ++i) {
        int unum;cin>>unum;
        vector<Stu> lv;
        for (int j = 0; j < unum; ++j) {
            Stu s; cin>>s.code >> s.score;
            s.l_num = i;
            lv.push_back(s);
        }
        sort(lv.begin(),lv.end(),cmpS);
        lv[0].l_rank = 1;
        sv.push_back(lv[0]);
        for (int j = 1; j < unum; ++j) {
            if(lv[j].score == lv[j-1].score){
                lv[j].l_rank = lv[j-1].l_rank;
            } else{
                lv[j].l_rank = j+1;
            }
            sv.push_back(lv[j]);
        }
    }
    sort(sv.begin(),sv.end(),cmpS);
    cout<<sv.size()<<endl;
    cout<<sv[0].code<<" 1"<<" "<<sv[0].l_num<<" "<<sv[0].l_rank<<endl;
    sv[0].f_rank = 1;
    for (int i = 1; i < sv.size(); ++i) {
        if(sv[i].score == sv[i-1].score){
            sv[i].f_rank = sv[i-1].f_rank;
        } else{
            sv[i].f_rank = i+1;
        }
        printf("%s %d %d %d\n",sv[i].code.c_str(),sv[i].f_rank,sv[i].l_num,sv[i].l_rank);
    }
}
