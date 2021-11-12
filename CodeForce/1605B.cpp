#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int t, len, c0, c1;
string s, o;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    cin >> t;
    for (;t > 0;t--) {
        cin >> len >> s;
        c1 = 0;
        for (int i = 0;i < len;i++)
            if (s[i] == '1')
                c1++;
        c0 = c1;
        for (int i = len - 1;i >= len - c1;i--)
            if (s[i] == '1')
                c0--;
            else
                c0++;
        if (c0) {
            printf("1\n%d ", c0);
            int i = 0;
            for (;i < len - c1;i++)
                if (s[i] == '1')
                    printf("%d ", i + 1);
            for (;i < len;i++)
                if (s[i] == '0')
                    printf("%d ", i + 1);
            printf("\n");
        } else
            printf("0\n");
    }
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}