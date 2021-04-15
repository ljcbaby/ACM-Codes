#include <bits/stdc++.h>
using namespace std;

int main()
{
	freopen("1.in","r",stdin);
	freopen("1.out","w",stdout);
	int a ,b;
	scanf("%d%d",&a,&b);
	a=a%10;
	if(a==2)
		b=b-(b/4)*4;
	int r=1;
	for(int i=b;i>0;i--)
	{
		r=r*a;
		r=r%10;
	}
	printf("%d",r);
	return 0;
}