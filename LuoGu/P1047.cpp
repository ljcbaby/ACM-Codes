#include<bits/stdc++.h>
using namespace std;

int l,m,cut=0,x,y;
bool a[10005];

int main()
{
    scanf("%d%d",&l,&m);
    for(int i=0;i<l+1;i++)
        a[i]=1;
    for(int i=0;i<m;i++)
    {
        scanf("%d%d",&x,&y);
        for(int j=x;j<y+1;j++)
            a[j]=0;
    }
    for(int i=0;i<l+1;i++)
    {
        if(a[i]){cut++;}
    }
    printf("%d",cut);
    return 0;
}
