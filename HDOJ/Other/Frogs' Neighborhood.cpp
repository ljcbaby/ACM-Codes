#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    int T;
    scanf("%d", &T);
    while (T--) {
        int N;
        scanf("%d", &N);
        priority_queue<pair<int, int>, vector<pair<int, int>>, less<pair<int, int>>> q;
        for (int i = 0;i < N;i++) {
            int t;
            scanf("%d", &t);
            q.push(make_pair(t, i));
        }
        bool flag = true, a[N][N];
        memset(a, 0, sizeof(a));
        while (!q.empty()) {
            pair<int, int> t = q.top();
            q.pop();
            if (t.first > q.size()) {
                flag = false;
                break;
            }
            priority_queue<pair<int, int>, vector<pair<int, int>>, less<pair<int, int>>> qt;
            while (t.first--) {
                pair<int, int> tt = q.top();
                q.pop();
                a[t.second][tt.second] = true;
                a[tt.second][t.second] = true;
                tt.first--;
                if (tt.first)
                    qt.push(tt);
            }
            while (!qt.empty()) {
                q.push(qt.top());
                qt.pop();
            }
        }
        if (flag) {
            printf("YES\n");
            for (int i = 0;i < N;i++) {
                for (int j = 0;j < N;j++)
                    printf("%d ", a[i][j]);
                printf("\n");
            }
        } else {
            printf("NO\n");
        }
        printf("\n");
    }
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}
