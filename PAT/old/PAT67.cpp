#include "iostream"
#include "unordered_map"

using namespace std;
unordered_map<int, int> pm, notOk;

int main() {
    int num;
    cin >> num;
    int arr[num];
    int firstP;
    for (int i = 0; i < num; ++i) {
        cin >> arr[i];
        if (arr[i] == 0) {
            firstP = i;
        }
        pm[arr[i]] = i;
        if (arr[i] != i && arr[i]!=0) {
            notOk.emplace(arr[i], i);
        }
    }
    int times = 0;
    while (true) {
        // 现在应该的位置
        int nextP = pm[firstP];
        if (nextP != firstP) {
            pm[firstP] = pm[0];
            pm[0] = nextP;
            swap(arr[firstP], arr[nextP]);
            notOk.erase(firstP);
            firstP = nextP;
            times++;
        } else {
            int next;
            if (notOk.empty()) {
                break;
            } else {
                int val = notOk.begin()->first;
                next = notOk.begin()->second;
                pm[val] = pm[0];
                pm[0] = next;
                swap(arr[firstP], arr[next]);
                firstP = next;
                times++;
            }

        }
    }


    cout << times << endl;
}