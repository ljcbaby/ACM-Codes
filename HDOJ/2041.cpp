#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    int T;
    scanf("%d", &T);
    int a[50];
    memset(a, 0, sizeof(a));
    int m = 1;
    a[0] = 1;
    a[1] = 1;
    while (T--) {
        int N;
        scanf("%d", &N);
        N--;
        if (N > m) {
            for (int i = m + 1; i <= N; i++)
                a[i] = a[i - 1] + a[i - 2];
            m = N;
        }
        printf("%d\n", a[N]);
    }
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}
