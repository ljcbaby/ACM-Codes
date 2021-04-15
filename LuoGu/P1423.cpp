#include<bits/stdc++.h>
using namespace std;

double s,step=2,cut=0;
int i=0;

int main()
{
    scanf("%lf",&s);
    while(cut<s)
    {
        cut+=step;
        step*=0.98;
        i++;
    }
    printf("%d",i);
    return 0;
}
