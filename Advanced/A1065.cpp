#include <bits/stdc++.h>
#define MAXN 65536
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        long long a, b, c, sum;
        scanf("%lld %lld %lld", &a, &b, &c);
        sum = a + b;
        if (a > 0 && b > 0 && sum < 0)
            printf("Case #%d: true\n", i + 1);
        else if (a < 0 && b < 0 && sum >= 0)
            printf("Case #%d: false\n", i + 1);
        else if (sum > c)
            printf("Case #%d: true\n", i + 1);
        else
            printf("Case #%d: false\n", i + 1);
    }

    system("pause");
    return 0;
}