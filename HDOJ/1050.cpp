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
    cin >> T;
    while (T--) {
        int N;
        int a[401] = { 0 }, m = 0;
        int x, y;
        cin >> N;
        for (int i = 0;i < N;i++) {
            cin >> x >> y;
            x = (x + 1) / 2;
            y = (y + 1) / 2;
            if (x > y)
                swap(x, y);
            a[x] += 1;
            a[y + 1] -= 1;
        }
        for (int i = 1;i <= 400;i++) {
            a[i] += a[i - 1];
            if (a[i] > m)
                m = a[i];
        }
        printf("%d\n", m * 10);
    }
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}