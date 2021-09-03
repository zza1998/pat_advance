//
// Created by 周子安 on 2021/8/11.
//
#include "iostream"
#include "vector"
#include "algorithm"
#include "unordered_map"

using namespace std;
struct Stu {
    string name;
    int age{}, worth{};
};
vector<Stu> newT, vall,lassv;
int cmpS( const Stu& stu1,  const Stu& stu2) {
    if (stu1.worth != stu2.worth) {
        return stu1.worth > stu2.worth;
    } else if(stu1.age != stu2.age) {
        return stu1.age < stu2.age;
    } else{
        return stu1.name < stu2.name;
    }
}
vector<Stu> sv[300];
void getL(int minAge, int maxAge, int top) {
    for (int i = 0; i < lassv.size() && newT.size()<=top; ++i) {
        if(lassv[i].age>=minAge&&lassv[i].age<=maxAge){
            newT.push_back(lassv[i]);
        }
    }
}
int main() {
    int num, check;
    cin >> num >> check;
    for (int i = 0; i < num; ++i) {
        Stu s;
        cin >> s.name >> s.age >> s.worth;
        vall.push_back(s);
    }
    sort(vall.begin(), vall.end(), cmpS);
    for (int i = 0; i < num; ++i) {
        if(sv[vall[i].age].size()<100){
            sv[vall[i].age].push_back(vall[i]);
            lassv.push_back(vall[i]);
        }
    }
    for (int i = 1; i <= check; ++i) {
        int top, minAge, maxAge;
        cin >> top >> minAge >> maxAge;
        newT.clear();
        getL(minAge, maxAge, top);
        printf("Case #%d:\n", i);
        if (newT.empty()) {
            cout << "None" << endl;
        } else {
            for (int j = 0; j < top && j < newT.size(); ++j) {
                cout << newT[j].name << " " << newT[j].age << " " << newT[j].worth << endl;
            }
        }
    }
}