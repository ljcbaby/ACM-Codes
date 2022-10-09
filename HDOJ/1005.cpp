#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    int a, b, n;
    while (cin >> a >> b >> n) {
        if (a == 0 && b == 0 && n == 0) break;
        a %= 7;
        b %= 7;
        n--;
        int start = 0, end = 0;
        int f[51];
        f[0] = f[1] = 1;
        for (int i = 2; i <= n; i++) {
            f[i] = (a * f[i - 1] + b * f[i - 2]) % 7;
            int j = i - 1;
            while (j >= 1) {
                if (f[j] == f[i] && f[j - 1] == f[i - 1]) {
                    start = j - 1;
                    end = i - 1;
                    break;
                }
                j--;
            }
            if (j >= 1) break;
        }
        if (start == 0 && end == 0) {
            cout << f[n] << endl;
        } else {
            cout << f[(n - start) % (end - start) + start] << endl;
        }
    }
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}