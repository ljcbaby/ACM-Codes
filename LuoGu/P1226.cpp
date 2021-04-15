#include<bits/stdc++.h>
using namespace std;

long long b,b2,p,k,s;

long long f(long long n){
    if(n==1){return b2;}
    if(n==0){return 1;}
    long long t=f(n/2);
    t=t*t%k;
    n %= 2;
    if(n){return t*b2%k;}else{return t;}
}

int main(){
    ios::sync_with_stdio(0);
    cin>>b>>p>>k;
    b2 = b % k;
    if(b2==0){s=0;}
    else if(b2==1){s=1;}
    else{s=f(p);}
    cout<<b<<"^"<<p<<" mod "<<k<<"="<<s;
    return 0;
}
