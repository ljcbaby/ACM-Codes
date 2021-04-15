#include <bits/stdc++.h>
using namespace std;

void print_n(int n,int m)
{
	if(n==0)
	{
		printf("%d\n",m);
		return;
	}
	print_n(n/10,m+1);
	printf("%d\n",n%10);
}

int main()
{
	freopen("1.in","r",stdin);
	freopen("1.out","w",stdout);
	int n;
	scanf("%d",&n);
	print_n(n,0);
	return 0;
}