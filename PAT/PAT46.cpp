    //
    // Created by 周子安 on 2021/8/2.
    //

    #include "iostream"
    #include "map"
    #include "cmath"

    using namespace std;

    int main() {
        int num;
        cin >> num;
        int sum[100010];
        int total = 0;
        for (int i = 1; i <= num; ++i) {
            int di;
            cin >> di;
            total += di;
            sum[i + 1] = total;
        }
        int checknum;
        cin >> checknum;
        for (int i = 0; i < checknum; ++i) {
            int from, to;
            cin >> from >> to;
            if (from > to) {
                swap(from, to);
            }
            cout << min(sum[to] - sum[from], total - (sum[to] - sum[from])) << endl;

        }
    }