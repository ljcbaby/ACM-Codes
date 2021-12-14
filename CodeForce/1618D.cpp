#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, x, k, a[100], sum, i;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    scanf("%d", &n);
    for (;n;n--) {
        scanf("%d%d", &x, &k);
        for (i = 0;i < x;i++)
            scanf("%d", a + i);
        sort(a, a + x);
        sum = 0;
        x--;
        for (i = x - k;k > 0;i--, k--, x--)
            sum += a[i] / a[x];
        for (;i >= 0;i--)
            sum += a[i];
        printf("%d\n", sum);
    }
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}