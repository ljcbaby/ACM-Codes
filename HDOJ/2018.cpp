#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    ll n[60];
    n[0] = 1;
    n[1] = 1;
    n[2] = 2;
    for (int i = 3; i < 60; i++)
        n[i] = n[i - 1] + n[i - 3];
    int t;
    while (scanf("%d", &t) && t)
        printf("%llu\n", n[t]);
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}
