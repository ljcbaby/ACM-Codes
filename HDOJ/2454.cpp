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
    while (T--) {
        int N;
        scanf("%d", &N);
        int a[N];
        for (int i = 0;i < N;i++)
            scanf("%d", a + i);
        sort(a, a + N, greater<int>());
        int L = 0, R = N - 1;
        while (L < R) {
            if (L + a[L] > R) {
                printf("no\n");
                break;
            }
            for (int i = L + 1;i <= L + a[L];i++)
                a[i]--;
            L++;
            sort(a + L, a + R + 1, greater<int>());
            while (!a[R] && R > L)
                R--;
            if (L == R) {
                if (a[L])
                    printf("no\n");
                else
                    printf("yes\n");
            }
        }
    }
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}