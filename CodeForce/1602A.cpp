#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int t,n, a[2000];
map<int,int> q;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    cin >> t;
    for (;t > 0;t--) {
        cin >> n;
    }
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, len, f;
string ss;
char m;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    cin >> n;
    for (;n > 0;n--) {
        cin >> ss;
        m = 'z';
        len = ss.length();
        for (int i = 0;i < len;i++)
            m = min(m, ss[i]);
        f = 0;
        putchar(m);
        putchar(' ');
        for (int i = 0;i < len;i++)
            if (f || m != ss[i]) {
                putchar(ss[i]);
            } else f = 1;
        putchar('\n');
    }
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}