#include "algorithm"
#include "iostream"
#include "vector"

using namespace std;

int main() {
    vector<int> vz, hz;
    int result = 0, p = 0, q = 0;
    int num;
    cin >> num;
    for (int i = 0; i < num; ++i) {
        int data;
        cin >> data;
        vz.push_back(data);
    }
    int num1;
    cin >> num1;
    for (int i = 0; i < num1; ++i) {
        int data;
        cin >> data;
        hz.push_back(data);
    }
    sort(vz.begin(), vz.end());
    sort(hz.begin(), hz.end());
    for (p = 0, q = 0; p < num && q < num1 && vz[p] < 0 && hz[q] < 0; q++, p++) {
        result += vz[p] * hz[q];
    }
    for (p = num - 1, q = num1 - 1; p >= 0 && q >= 0 && vz[p] > 0 && hz[q] > 0; q--, p--) {
        result += vz[p] * hz[q];
    }
    cout << result;

}