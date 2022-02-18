
#include "iostream"
#include "algorithm"

using namespace std;
int v[3][120], num;

int cmpA(int a, int b) {
    int match = 1;
    for (int i = 0; i < num; ++i) {
        if (v[a][i] != v[b][i]) {
            match = 0;
            return match;
        }
    }
    return match;
}

int main() {
    cin >> num;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < num; ++j) {
            int cc;cin >> cc;
            if (i == 0) v[2][j] = cc;
            v[i][j] = cc;
        }
    }
    for (int i = 0; i <= num-1; ++i) {
        sort(v[0], v[0] + i);
        if (cmpA(0, 1)) {
            sort(v[0], v[0] + i + 1);
            cout << "Insertion Sort" << endl;
            for (int j = 0; j < num; ++j) {
                if (j) cout << " ";
                cout << v[0][j];
            }
            return 0;
        }
    }

    int n = 1;
    while (n <= num) {
        n *= 2;
        for (int i = 0; i < num / n; i++) {
            sort(v[2] + i * n, v[2] + (i + 1) * n);
        }
        sort(v[2] + num / n * n, v[2] + num);
        if (cmpA(1, 2)) {
            n *= 2;
            for (int i = 0; i < num / n; i++) {
                sort(v[2] + i * n, v[2] + (i + 1) * n);
            }
            sort(v[2] + num / n * n, v[2] + num);
            cout << "Merge Sort" << endl;
            for (int j = 0; j < num; ++j) {
                if (j) cout << " ";
                cout << v[2][j];
            }
            return 0;
        }
    }


}