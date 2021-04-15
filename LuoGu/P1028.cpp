#include <string>
#include<bits/stdc++.h>
using namespace std;

int n,a[1005];

int f(int n)
{
    if(a[n]){return a[n];}
    int sum=1;
    for(int i=1;i<=n/2;i++)
        sum+=f(i);
    return a[n]=sum;
}

int main()
{
    scanf("%d",&n);
    a[1]=1;
    printf("%d",f(n));
    return 0;
}
