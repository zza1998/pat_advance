#include "iostream"
#include "vector"
#include "stack"

using namespace std;
int sum,maxN;
bool isOk(vector<int> &v) {
    stack<int> stk;
    int lastPush = 1;
    for (int i = 0; i < v.size(); ++i) {
        if(!stk.empty()&&stk.top() == v[i]){
            stk.pop();
            continue;
        }
        int j = lastPush;
        for (; j <= v[i] && stk.size() < maxN; j++) {
            stk.push(j);
        }
        lastPush = j;
        if (stk.top() == v[i]) {
            stk.pop();
        } else {
            return false;
        }
    }
    return true;
}

int main() {
    int nums;
    cin >> maxN >> sum >> nums;
    vector<vector<int>> popList;
    for (int i = 0; i < nums; ++i) {
        vector<int> v;
        for (int j = 0; j < sum; ++j) {
            int x;
            cin >> x;
            v.push_back(x);
        }
        popList.push_back(v);
    }
    for (int k = 0; k <nums; ++k) {
        isOk(popList[k])?cout<<"YES"<<endl:cout<<"NO"<<endl;
    }

}