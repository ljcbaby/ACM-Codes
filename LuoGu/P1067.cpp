#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n,a[101];

int main()
{
    //ios::sync_with_stdio(0);
    cin>>n;
    if(n==0){int t;cin>>t;cout<<t;return 0;}
    for(int i=n;i>=0;i--){cin>>a[i];}
    if(abs(a[n])!=1){printf("%dx^%d",a[n],n);}else{if(a[n]>0){printf("x^%d",n);}else{printf("-x^%d",n);}}
    for(int i=n-1;i>1;i--){
        if(!a[i]){continue;}
        if(abs(a[i])==1){if(a[i]>0){printf("+x^%d",i);}else{printf("-x^%d",i);}continue;}
        if(a[i]>0){printf("+%dx^%d",a[i],i);}else{printf("%dx^%d",a[i],i);}
    }
    if(a[1]){
        if(abs(a[1])==1){if(a[1]>0){printf("+x");}else{printf("-x");}}
        else {if(a[1]>0){printf("+%dx",a[1]);}else{printf("%dx",a[1]);}}
    }
    if(a[0]){if(a[0]>0){printf("+%d",a[0]);}else{printf("%d",a[0]);}}
    return 0;
}
