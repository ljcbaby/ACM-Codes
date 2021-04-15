#include<bits/stdc++.h>
using namespace std;

char s[13];
bool f;

int main()
{
    scanf("%s",s);
    int t=((s[0]-'0')*1+(s[2]-'0')*2+(s[3]-'0')*3+(s[4]-'0')*4+(s[6]-'0')*5+(s[7]-'0')*6+(s[8]-'0')*7+(s[9]-'0')*8+(s[10]-'0')*9)%11;
    char tt;
    if(t==10){tt='X';}else{tt=t+'0';}
    if(tt==s[12])
    {f=1;}
    else
    {f=0;s[12]=tt;}
    if(f)
    {printf("Right");}
    else
    {printf("%s",s);}
    return 0;
}
