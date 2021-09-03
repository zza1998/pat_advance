#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

typedef long long LL;

int main() {
    LL a, b, c;
    int t;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++) {
        scanf("%lld %lld %lld", &a, &b, &c);
        LL sum = a + b;
        if(a > 0 && b > 0 && sum < 0) { // 正溢出
            printf("Case #%d: true", i);
        } else if(a < 0 && b < 0 && sum >= 0) { // 负溢出
            printf("Case #%d: false", i);
        } else {
            if(sum > c) {
                printf("Case #%d: true", i);
            } else {
                printf("Case #%d: false", i);
            }
        }
        if(i != t) printf("\n");
    }
    return 0;
}