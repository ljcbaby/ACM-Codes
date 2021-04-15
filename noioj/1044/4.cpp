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
		printf("%lld\n",vn[n]);
		return;
	}
	if (f_lower==1)
	{	
		printf("%lld\n",vn[1]);
		return;
	}
	if (m==vn[f_lower])
	{	
		printf("%lld\n",m);
		return;
	}
	int up_m,down_m;
	up_m=vn[f_lower]-m;
	down_m=m-vn[f_lower-1];
		printf("%lld\n",(down_m<=up_m ? m-down_m : m + up_m));
}

int main()
{
	freopen("1.in","r",stdin);
	freopen("1.out","w",stdout);
	scanf("%lld",&n);
	for(long long i=1;i<=n;i++)
		scanf("%lld",&vn[i]);
	//sort(vn+1,vn+n);
	scanf("%lld",&m);
	long long vm;
	for(long long i=1;i<=m;i++)
	{
		scanf("%lld",&vm);
		deal(vm);
	}
	return 0;
}