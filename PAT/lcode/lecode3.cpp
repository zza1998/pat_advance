
#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int num, limit;
    cin >> num >> limit;
    vector<int> v, res;
    int v2[limit];
    for (int i = 1; i <= limit; ++i) {
        if (isPrime(i)) {
            v.push_back(i);
            v2[i] = 1;
        }
    }
    int maxL = limit / (num - 1);;
    while (maxL>0) {
        for (int i = (int) v.size() - 1; i >= 0; i--) {
            if(v[i] - (num-1) * maxL <= 0) break;
            int flag = true;
            for (int j = 0; j < num; ++j) {
                if (v2[v[i] - j * maxL] != 1) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                for (int j = 0; j < num; ++j) {
                    res.push_back(v[i] - j * maxL);
                }
                for (int j = (int) res.size() - 1; j >= 0; j--) {
                    if(j!=(int) res.size() - 1) cout<<" ";
                    cout << res[j];
                }
                return 0;
            }
        }
        maxL--;
    }
    cout<<v.back()<<endl;

}