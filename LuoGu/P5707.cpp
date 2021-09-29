#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int s, v, t = 24 * 60 + 480 - 10;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    cin >> s >> v;
    t -= s / (double)v;
    if (t >= 1440)t -= 1440;
    printf("%02d:%02d", t / 60, t % 60);
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}
