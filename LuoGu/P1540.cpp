#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int m,n,len=0,a[2000],l=0,r=0,c=0,t;

bool f(int w){
    for(int i=l;i<r;i++)
        if(a[i]==w){return true;}
    return false;
}

int main()
{
    ios::sync_with_stdio(0);
    cin>>m>>n;
    for(int i=0;i<n;i++){
        cin>>t;
        if(f(t)){continue;}
        else{
            c++;
            a[r++]=t;
            if(len==m){l++;}else{len++;}
        }
    }
    cout<<c;
    return 0;
}
