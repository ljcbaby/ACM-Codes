#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int p = 1000;

int exp(int a, int b) {
    int ans = 1;
    while (b) {
        if (b & 1)
            ans = (ll)ans * a % p;
        a = (ll)a * a % p;
        b >>= 1;
    }
    return ans;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    int a, b;
    while (cin >> a >> b) {
        if (a == 0 && b == 0)
            break;
        cout << exp(a, b) << endl;
    }
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}