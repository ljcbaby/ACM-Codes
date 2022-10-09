#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int p = 10;

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
    int a;
    cin >> a;
    while (cin >> a) {
        cout << exp(a, a) << endl;
    }
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}