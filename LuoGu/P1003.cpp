#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n,x,y,a[10000],b[10000],g[10000],k[10000],t=-1;

int main()
{
    ios::sync_with_stdio(0);
    cin>>n;
    for(int i=0;i<n;i++){cin>>a[i]>>b[i]>>g[i]>>k[i];}
    cin>>x>>y;
    for(int i=0;i<n;i++){if((a[i]<=x)&&(x<=a[i]+g[i])&&(b[i]<=y)&&(y<=b[i]+k[i]))t=i+1;}
    cout<<t;
    return 0;
}
