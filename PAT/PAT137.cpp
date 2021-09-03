#include "iostream"
#include "unordered_map"
#include "vector"
#include "algorithm"
using namespace std;
struct User {
    string name;
    int fc{};
    int gm = -1, gf = -1, g{};
};
bool isOk(User &u) {
    if (u.fc < 200 || u.g < 60 || u.g > 100) {
        return false;
    }
    return true;
}
int cmp(User &u1, User &u2) {
    if (u1.g != u2.g) {
        return u1.g > u2.g;
    }
    return u1.name < u2.name;
}
unordered_map<string, User> m;
int main() {
    int N, M, P;
    cin >> N >> M >> P;
    for (int i = 0; i < N + M + P; ++i) {
        string s;
        int score;
        cin >> s >> score;
        if (i < N) {
            m[s].fc = score;
        } else if (i < N + M) {
            m[s].gm = score;
        } else {
            m[s].gf = score;
        }
        m[s].name = s;
    }
    vector<User> v;
    for (const auto& item : m) {
        if(item.second.fc<200) continue;
        if (item.second.gm > item.second.gf) {
            int yu = (int) (((double) item.second.gm * 0.4 + (double) item.second.gf * 0.6) * 10) % 10;
            m[item.first].g = (int) (((double) item.second.gm * 0.4 + (double) item.second.gf * 0.6) * 10) / 10;
            if (yu >= 5) {
                m[item.first].g++;
            }
        } else {
            m[item.first].g = item.second.gf;
        }
        v.push_back(m[item.first]);
    }
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < v.size(); ++i) {
        if(isOk(v[i]))
        printf("%s %d %d %d %d\n", v[i].name.c_str(), v[i].fc, v[i].gm, v[i].gf, v[i].g);
    }
}