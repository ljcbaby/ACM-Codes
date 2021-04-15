#include<bits/stdc++.h>
using namespace std;

int a[10],h,cut=0;

int main()
{
    for(int i=0;i<10;i++)
        scanf("%d",&a[i]);
    scanf("%d",&h);
    h+=31;
    for(int i=0;i<10;i++)
    {
        if(a[i]<h){cut++;}
   }
    printf("%d",cut);
    return 0;
}
