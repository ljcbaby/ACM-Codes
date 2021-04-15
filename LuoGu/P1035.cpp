#include<bits/stdc++.h>
using namespace std;

int k,i;
double ans=0;

int main()
{
	scanf("%d",&k);
    for(i=1;;i++)
	{
        ans+=(1.0/i);
		if(ans>k){break;}
	}
	printf("%d",i);
    return 0;
}
