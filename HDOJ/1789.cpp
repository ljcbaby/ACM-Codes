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
    cin >> T;
    while (T--) {
        int N;
        scanf("%d", &N);
        pair<int, int> a[N];
        for (int i = 0;i < N;i++)
            scanf("%d", &a[i].second);
        for (int i = 0;i < N;i++)
            scanf("%d", &a[i].first);
        sort(a, a + N, [](pair<int, int> x, pair<int, int> y) {
            if (x.second == y.second)
                return x.first > y.first;
            return x.second > y.second;
            });
        priority_queue<pair<int, int>, vector<pair<int, int>>, less<pair<int, int>>> pq;
        int p = 0;
        for (int current_day = a[0].second;current_day >= 1;current_day--) {
            for (;p < N && a[p].second == current_day;p++)
                pq.push(a[p]);
            if (!pq.empty())
                pq.pop();
        }
        int ans = 0;
        while (!pq.empty()) {
            ans += pq.top().first;
            pq.pop();
        }
        printf("%d\n", ans);
    }
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}