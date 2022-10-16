#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    int N;
    scanf("%d", &N);
    while (N) {
        int a[N], b[N];
        for (int i = 0;i < N;i++)
            scanf("%d", &a[i]);
        for (int i = 0;i < N;i++)
            scanf("%d", &b[i]);
        sort(a, a + N);
        sort(b, b + N);
        int ans = 0, i = 0, L = 0, R = N;
        while (i < N) {
            if (a[i] > b[L]) {
                ans++;
                L++;
                i++;
            } else if (a[N - 1] > b[R - 1]) {
                ans++;
                R--;
                N--;
            } else {
                if (a[i] != b[R - 1])
                    ans--;
                i++;
                R--;
            }
        }
        printf("%d\n", ans * 200);
        scanf("%d", &N);
    }
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}