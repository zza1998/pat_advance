//
// Created by 周子安 on 2021/8/11.
//
#include "iostream"
#include "vector"
#include "string"
#include "algorithm"
using namespace std;
struct Stu {
    string parms[4];
    string value[3];
    int score;
} ;
int flag = -1;
bool cmps(const Stu &s1, const Stu &s2) {
    if(flag == 3){
        if (s1.score!=s2.score) {
            return s1.score < s2.score;
        }
        return s1.parms[1] < s2.parms[1];
    }
    if (s1.parms[flag] != s2.parms[flag]) {
        return s1.parms[flag] <= s2.parms[flag];
    }
    return s1.parms[1] < s2.parms[1];
}

int main() {
    int num;
    cin >> num >> flag;
    vector<Stu> ss(num);
    for (int i = 0; i < num; ++i) {
        string a, b;cin >> a >> b;
        ss[i].parms[1] = ss[i].value[1] = a;
        ss[i].parms[2] = ss[i].value[2] = b;
        int sc;cin >> sc;
        ss[i].score = sc;
    }
    sort(ss.begin(), ss.end(), cmps);
    for (int i = 0; i < num; ++i) {
        cout << ss[i].value[1] << " " << ss[i].value[2] << " " << ss[i].score << endl;
    }

}

