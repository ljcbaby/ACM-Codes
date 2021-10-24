#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, x, y, z;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    cin >> n;
    for (;n > 0;n--) {
        cin >> x >> y >> z;
        z %= 2;
        if (z && y) {
            y -= 1;
            x += 1;
        }
        y %= 2;
        if (y && x >= 2)
            x -= 2;
        x %= 2;
        printf("%d\n", x);
    }
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}