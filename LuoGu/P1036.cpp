#include <string>
#include<bits/stdc++.h>
using namespace std;

int n,k,a[20];
map<int,bool> m;
long long sum=0,sa=0;

void proc(long long n)
{
    bool f;
    for(int i=2;i<=n;i++)
    {
        f=1;
        for(int j=2;j<=sqrt(i);j++)
        {
            if(i%j==0){f=0;break;}
        }
        if(f){m[i]=1;}else{m[i]=0;}
    }//cout<<i<<endl;
    //cout<<endl;
}

void f(int i,int sa,int k)
{//cout<<i<<" "<<sa<<" "<<k<<endl;
    if(k==0){if(m[sa]){sum++;}return;}
    for(int j=i;j<n;j++)
        f(j+1,sa+a[j],k-1);
}

int main()
{
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,a+n);
    int i=k,j=n-1;;
    while(i>0)
    {
        sa+=a[j];
        i--;
        j--;
    }
    proc(sa);
    f(0,0,k);
    printf("%lld",sum);
    return 0;
}
