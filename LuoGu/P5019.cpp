#include<bits/stdc++.h>
using namespace std;
const int maxn=100001;

int n,h[maxn],res;

int main()
{
	scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&h[i]);
    }
    n=n-1;
    for(int j=0;j<n;j++)
	{
        res=res+max(h[j+1]-h[j],0);
    }
    res=res+h[0];
    printf("%d",res);
	return 0;
}
