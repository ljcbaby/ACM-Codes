#include<bits/stdc++.h>
using namespace std;

int a[100],n,cut=0;
map<int,int> m;

int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
        m[a[i]]=0;
        for(int j=0;j<n;j++)
            for(int k=0;k<n;k++)
                if((a[i]==a[j]+a[k])&&(j!=k)){m[a[i]]++;}
        if(m[a[i]]){cut++;}
    }
    printf("%d ",cut);
    return 0;
}
