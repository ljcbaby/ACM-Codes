#include<bits/stdc++.h>
using namespace std;

int n,c,a[200000];
long long cut=0;
map<int,int> m;

int main()
{
    scanf("%d%d",&n,&c);
    for(int i=0;i<n;i++)
	{
        scanf("%d",&a[i]);
		m[a[i]]++;
		a[i]-=c;
	}
	for(int i=0;i<n;i++)
	{
		cut+=m[a[i]];
	}
	printf("%lld",cut);
    return 0;
}
