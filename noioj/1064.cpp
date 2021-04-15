#include <bits/stdc++.h>
using namespace std;
unsigned long long f[30];

int main()
{
	freopen("1.in","r",stdin);
	freopen("1.out","w",stdout);
	unsigned int n;
	scanf("%u",&n);
	f[0]=0;
	f[1]=1;
	for(unsigned int i=2;i<n;i++)
		f[i]=f[i-1]+f[i-2];
	printf("%llu",f[n-1]);
	return 0;
}