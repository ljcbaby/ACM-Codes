#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

double f(pair<double, double> a[ ], int l, int r) {
    if (r - l == 1)
        return DBL_MAX;
    if (r - l == 2)
        return hypot(a[l].first - a[l + 1].first, a[l].second - a[l + 1].second);
    int m = (l + r) >> 1;
    double d = min(f(a, l, m), f(a, m, r));
    vector<pair<double, double>> b;
    for (int i = m - 1;i >= l;i--)
        if (a[i].first >= a[m].first - d)
            b.push_back(a[i]);
        else
            break;
    for (int i = m;i < r;i++)
        if (a[i].first <= a[m].first + d)
            b.push_back(a[i]);
        else
            break;
    sort(b.begin(), b.end(), [](pair<double, double> a, pair<double, double> b) {
        return a.second < b.second;
        });
    for (unsigned long int i = 0;i < b.size();i++)
        for (unsigned long int j = i + 1;j < b.size();j++)
            if (b[j].second - b[i].second >= d)
                break;
            else
                d = min(d, hypot(b[i].first - b[j].first, b[i].second - b[j].second));
    return d;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    int N;
    scanf("%d", &N);
    while (N) {
        pair<double, double> a[N];
        for (int i = 0;i < N;i++)
            scanf("%lf%lf", &a[i].first, &a[i].second);
        sort(a, a + N);
        printf("%.2lf\n", f(a, 0, N) / 2);
        scanf("%d", &N);
    }
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}