#include<bits/stdc++.h>
using namespace std;

int x,n,i=0;

int main()
{
    scanf("%d%d",&x,&n);
    while(n>0)
    {
        x%=7;
        if((x>0)&&(x<6))
        {
            i++;
        }
        n--;
        x++;
    }
    printf("%d",i*250);
    return 0;
}
