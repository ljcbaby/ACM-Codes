#include<bits/stdc++.h>
using namespace std;

double c=0,step=7,s,x;
bool f1,f2;

int main()
{
    ios::sync_with_stdio(0);
    cin>>s>>x;
    s-=x;
    x=s+2*x;
    f1=0;
    f2=1;
    while(c<=x)
    {
        if((s<=c) && !f1){f1=1;}
        c+=step;
        step*=0.98;
        if(f1 && c<=x){f2=0;break;}
    }
    if(f2){cout<<"n";}else{cout<<"y";}
    return 0;
}
