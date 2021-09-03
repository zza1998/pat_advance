#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,ans = 0;
    scanf("%d", &n);
    int a = 1, left, right;
    while (n / a)
    {
        int now = n / a % 10;
        left = n / (a * 10);
        right = n%a;
        if (now < 2)ans += left*a;
        else if (now == 2)ans += left*a + 1 + right;
        else if (now > 2)ans += (left + 1)*a;
        a *= 10;
    }
    printf("%d", ans);
    return 0;
}