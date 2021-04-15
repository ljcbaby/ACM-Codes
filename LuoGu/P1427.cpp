#include<bits/stdc++.h>
using namespace std;

int l,m,cut=0,x,y;
bool a[10005];

void deal()
{
    int x;
    scanf("%d",&x);
    if(x)
    {
        deal();
        printf("%d ",x);
    }
}

int main()
{
    deal();
    return 0;
}
