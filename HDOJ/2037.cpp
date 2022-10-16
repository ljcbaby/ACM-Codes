#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    int N;
    scanf("%d", &N);
    while (N) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, less<pair<int, int>>> pq;
        for (int i = 0;i < N;i++) {
            int a, b;
            scanf("%d%d", &a, &b);
            pq.push(make_pair(b, a));
        }
        int ans = 0, t = pq.top().first;
        while (!pq.empty() && t) {
            if (pq.top().first <= t) {
                ans++;
                t = pq.top().second;
            }
            pq.pop();
        }
        printf("%d\n", ans);
        scanf("%d", &N);
    }
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}