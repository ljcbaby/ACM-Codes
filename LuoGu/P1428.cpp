#include<bits/stdc++.h>
using namespace std;

int a[100],n,cut=0;

int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(a[i]>a[j]){cut++;}
        }
        printf("%d ",cut);
        cut=0;
    }
    return 0;
}
