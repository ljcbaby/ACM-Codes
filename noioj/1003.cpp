#include <bits/stdc++.h>
using namespace std;

int main()
{
	freopen("1.in","r",stdin);
	freopen("1.out","w",stdout);
	long long a;
	cin >> a;
	a = a * 1001;
	a = a / 7;
	a = a / 11;
	a = a / 13;
	cout << a;
	return 0;
}