#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    int m, n;
    while (cin >> m >> n) {
        if (m == -1 && n == -1) break;
        double sum = 0;
        int w[n], p[n];
        for (int i = 0; i < n; i++) {
            cin >> w[i] >> p[i];
        }
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if ((double)w[j] * p[j + 1] < (double)w[j + 1] * p[j]) {
                    swap(p[j], p[j + 1]);
                    swap(w[j], w[j + 1]);
                }
            }
        }
        for (int i = 0; i < n; i++) {
            if (w[i] == 0)
                continue;
            if (m >= p[i]) {
                sum += w[i];
                m -= p[i];
            } else {
                sum += (double)m * w[i] / p[i];
                break;
            }
        }
        printf("%.3lf\n", sum);
    }
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}