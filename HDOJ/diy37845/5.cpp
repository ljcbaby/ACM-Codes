#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

unsigned long long x, y, m;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    while (cin >> x >> y) {
        m = min(x, y) - 1;
        x -= m;
        y -= m;
        cout << x * y << endl;
    }
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}
