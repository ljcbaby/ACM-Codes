#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll x, a, y, b;

int main() {
#ifndef ONLINE_JUDGE
	freopen("1.in", "r", stdin);
	freopen("1.out", "w", stdout);
	freopen("1.err", "w", stderr);
#endif
	cin >> x >> a >> y >> b;
	printf("%.2lf", (x * a - y * b) / (double)(a - b));
#ifndef ONLINE_JUDGE
	fclose(stdin);
	fclose(stdout);
	fclose(stderr);
#endif
	return 0;
}