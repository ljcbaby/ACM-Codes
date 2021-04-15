#include<bits/stdc++.h>
using namespace std;

int n,a1,a2,a3,cn0,cn1,cn2,c0,c1,c2,res;

int main()
{
    scanf("%d %d %d %d %d %d %d",&n,&a1,&cn0,&a2,&cn1,&a3,&cn2);
    for(c0=1;;c0++)
        if(c0*a1>=n)
            break;
    for(c1=1;;c1++)
        if(c1*a2>=n)
            break;
    for(c2=1;;c2++)
        if(c2*a3>=n)
            break;
    printf("%d",min(c0*cn0,min(c1*cn1,c2*cn2)));
    return 0;
}
