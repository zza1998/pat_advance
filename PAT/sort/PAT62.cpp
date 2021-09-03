//
// Created by 周子安 on 2021/8/12.
//

#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;
struct Stu {
    string code;
    int vt, te;
};

int cmp(const Stu& stu1,const Stu& stu2) {
    if((stu1.vt+stu1.te)!=(stu2.vt+stu2.te)){
        return (stu1.vt+stu1.te)>(stu2.vt+stu2.te);
    }
    if(stu1.vt != stu2.vt){
        return stu1.vt>stu2.vt;
    }
    return stu1.code<stu2.code;
}
vector<vector<Stu>> v(4);
int total = 0;
int main() {
    int num, low, high;
    cin >> num >> low >> high;
    for (int i = 0; i < num; ++i) {
        string code;int vt, te;
        cin >> code >> vt >> te;
        if (vt < low || te < low) {
            continue;
        }
        total++;
        Stu stu;
        stu.code = code;
        stu.te = te;
        stu.vt = vt;
        if (vt>=high && te>=high){
            v[0].push_back(stu);
        } else if(vt>=high && te<high){
            v[1].push_back(stu);
        } else if(vt<high && te<high && vt>=te){
            v[2].push_back(stu);
        } else{
            v[3].push_back(stu);
        }
    }
    cout<<total<<endl;
    for (int i = 0; i < 4; ++i) {
        sort(v[i].begin(), v[i].end(), cmp);
        for (int j = 0; j < v[i].size(); ++j) {
            cout<<v[i][j].code<<" "<<v[i][j].vt<<" "<<v[i][j].te<<endl;
        }
    }
}