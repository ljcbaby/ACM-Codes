#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    int n;
    scanf("%d", &n);
    for (;n;n--) {
        int a, b, c;
        scanf("%d%d%*d%*d%*d%*d%d", &a, &b, &c);
        printf("%d %d %d\n", a, b, c - a - b);
    }
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}