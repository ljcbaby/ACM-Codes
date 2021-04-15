#include <bits/stdc++.h>
using namespace std;

#define maxn 100000+5
long long vn[maxn];
long long n,m;

void deal(long long m)
{
	long long f_lower = lower_bound(vn+1,vn+n,m) - vn;
	if(f_lower==(n+1))
	{
		cout << vn[n] << endl;
		return;
	}
	if (m==vn[f_lower])
	{	
		cout << m << endl;
		return;
	}
	int up_m,down_m;
	up_m=vn[f_lower]-m;
	down_m=(f_lower!=1 ? m-vn[f_lower-1] : 1000000000);
	cout << (down_m<=up_m ? m-down_m : m + up_m) << endl;
}

int main()
{
	freopen("1.in","r",stdin);
	freopen("1.out","w",stdout);
	cin >> n;
	for(long long i=1;i<=n;i++)
		cin >> vn[i];
	//sort(vn+1,vn+n);
	cin >> m;
	long long vm;
	for(long long i=1;i<=m;i++)
	{
		cin >> vm;
		deal(vm);
	}
	return 0;
}