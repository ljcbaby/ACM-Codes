#include <bits/stdc++.h>
using namespace std;

int main()
{
	freopen("1.in","r",stdin);
	freopen("1.out","w",stdout);
	double cost;
	long long time;
	cin >> cost;
	if (cost==0.5)
		time=3;
	else
		time=3+ floor( (cost-0.5)*5 +0.01 ) ;
	cout << time;
	return 0;
}