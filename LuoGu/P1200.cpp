#include<bits/stdc++.h>
using namespace std;

char s1[6],s2[6];
int c1=1,c2=1;

int main()
{
    scanf("%s%s",s1,s2);
    for(long unsigned int i=0;i<strlen(s1);i++)
    {
        c1*=s1[i]-'@';

    }c1%=47;
    for(long unsigned int i=0;i<strlen(s2);i++)
    {
        c2*=s2[i]-'@';

    }c2%=47;
    if(c1==c2)
    {printf("GO");}
    else
    {printf("STAY");}
    return 0;
}
