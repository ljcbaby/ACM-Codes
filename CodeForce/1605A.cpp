#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int t, a, b, c;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    cin >> t;
    for (;t > 0;t--) {
        cin >> a >> b >> c;
        if ((a + b + c) % 3)
            printf("1\n");
        else
            printf("0\n");
    }
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}