#include<bits/stdc++.h>
using namespace std;

int x,n,t,cut=0;

int main()
{
    scanf("%d%d",&n,&x);
    for(int i=1;i<n+1;i++)
    {
        t=i;
        while(t)
        {
            if(t%10==x){cut++;}
            t/=10;
        }
   }
    printf("%d",cut);
    return 0;
}
