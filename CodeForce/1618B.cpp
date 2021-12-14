#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, x, ch, t;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    scanf("%d", &n);
    for (;n;n--) {
        scanf("%d", &x);
        getchar();
        putchar(getchar());
        putchar(t = ch = getchar());
        x--;x--;
        ch = getchar();
        while (x && ch != '\n') {
            if (ch == ' ') {
                ch = getchar();
                if (t != ch) {
                    putchar(ch);
                    x--;
                }
            } else {
                putchar(t = ch);
                x--;
            }
            ch = getchar();
        }
        if (x)
            putchar(t);
        putchar('\n');
    }
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}