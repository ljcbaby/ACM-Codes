#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, x;
ll t;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    cin >> n;
    for (;n > 0;n--) {
        t = 1;
        cin >> x;
        int p = pow(x, 0.5);
        for (int i = 2;i <= p;i++)
            if (x % i == 0) {
                t = t * i % 10007;
                if (i * i != x)
                    t = t * (x / i) % 10007;
            }
        cout << t << endl;
    }
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}
