#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

char ch;

ll t;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    while (~scanf("%c", &ch)) {
        t = 0;
        while (ch != '\n' && ch != -1) {
            if ('A' <= ch && ch <= 'Z')t += ch - 'A' + 1;
            if ('a' <= ch && ch <= 'z')t += ch - 'a' + 1;
            ch = getchar();
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
