#include <string>
#include<bits/stdc++.h>
using namespace std;

string s1,s2;
int c1=0,c2;
bool f;

int main()
{
    getline(cin,s1);
    getline(cin,s2);
    for(long unsigned int i=0;i<s1.length();i++)
    {
        s1[i]=tolower(s1[i]);
    }
    for(long unsigned int i=0;i<s2.length();i++)
    {
        s2[i]=tolower(s2[i]);
    }
    s1=' '+s1+' ';
    s2=' '+s2+' ';
    c2=s2.length();
    for(long unsigned int i=0;i<s2.length();i++)
    {
        f=1;
        for(long unsigned int j=0;j<s1.length();j++)
        {
            if(s2[i+j]!=s1[j]){f=0;break;}
        }
        if(f){c1++;c2=min(c2,(int)i);}
    }
    if(c1)
    {printf("%d %d",c1,c2);}
    else
    {printf("-1");}
    return 0;
}
