#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    int n;
    while (cin >> n) {
        if (n == 0)break;
        int t, sum = 0, sat = 0;
        for (int i = 0; i < n; i++) {
            cin >> t;
            if (t > sat) {
                sum += (t - sat) * 6;
            } else {
                sum += (sat - t) * 4;
            }
            sum += 5;
            sat = t;
        }
        cout << sum << endl;
    }
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}