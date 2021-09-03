#include "iostream"
#include "vector"
#include "unordered_map"
#include "algorithm"
#include "cmath"
using namespace std;
int tnum , es[6];;
struct Stu{
    int code{},scores[6]{},ranks[6]{},
    finalScore = 0,finalRank,canjia[6]{},perfectF=0,suf=0;
};
void setFinal(Stu &stu){
    for (int i = 1; i <= tnum; ++i) {
        if(stu.canjia[i]==1){
            stu.finalScore += stu.scores[i];
            if(es[i] == stu.scores[i]){
                stu.perfectF++;
            }
        }
    }
}
int cmpS(const Stu& stu1,const Stu& stu2){
    if(stu1.finalScore!=stu2.finalScore){
        return stu1.finalScore>stu2.finalScore;
    }
    if(stu1.perfectF!=stu2.perfectF){
        return stu1.perfectF>stu2.perfectF;
    }
    return stu1.code<stu2.code;
}
void printStu(const Stu &stu){
    printf("%d %05d %d",stu.finalRank,stu.code,stu.finalScore);
    for (int i = 1; i <= tnum; ++i) {
       if(stu.canjia[i] == 1){
           cout<<" "<<stu.scores[i];
       }else{
           cout<<" -";
       }
    }
    cout<<endl;
}
vector<Stu> v;
unordered_map<int,Stu> m;
int main(){
    int idNum,snum;
    cin>>idNum>>tnum>>snum;
    for (int i = 1; i <= tnum; ++i) {
        cin>>es[i];
    }
    for (int s = 0; s < snum; ++s) {
        int code,tno,tscore;
        cin>>code>>tno>>tscore;
        Stu stu{};
        if(m.find(code)!=m.end()){
            stu = m[code];
            stu.scores[tno] = max(tscore,stu.scores[tno]);
        } else{
            stu.scores[tno] = max(0,tscore);
        }
        stu.code = code;
        stu.canjia[tno] = 1;
        if(tscore != -1){
            stu.suf = 1;
        }
        m[code] = stu;
    }
    for(auto it: m){
        setFinal(it.second);
        if(it.second.suf == 1){
            v.push_back(it.second);
        }
    }
    sort(v.begin(),v.end(), cmpS);
    v[0].finalRank = 1;
    printStu(v[0]);
    for (int i = 1; i < v.size(); ++i) {
        if(v[i].finalScore==v[i-1].finalScore){
            v[i].finalRank = v[i-1].finalRank;
        } else{
            v[i].finalRank = i+1;
        }
        printStu(v[i]);
    }

}