#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    double sum, a;
    int n;
    while (cin >> a >> n) {
        sum = 0;
        while (n--) {
            sum += a;
            a = sqrt(a);
        }
        cout << fixed << setprecision(2) << sum << endl;
    }
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}