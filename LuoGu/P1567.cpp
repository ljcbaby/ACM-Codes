#include<bits/stdc++.h>
using namespace std;

unsigned int a[1000000],b[1000000],n,maxb=0;
map<int,int> m;

int main()
{
    scanf("%u",&n);
    for(unsigned int i=0;i<n;i++)
        scanf("%u",&a[i]);
    b[1]=1;
    for(unsigned int i=1;i<n;i++)
        if(a[i]>a[i-1])
        {b[i]=b[i-1]+1;}
        else
        {b[i]=1;}
    for(unsigned int i=0;i<n;i++)
        maxb=max(maxb,b[i]);
    printf("%d ",maxb);
    return 0;
}
