#include<bits/stdc++.h>
using namespace std;

int a[100],n,cut=1;
bool b[100];

int main(){
    ios::sync_with_stdio(0);
    cin>>n;
    for(int i=0;i<n;i++){cin>>a[i];b[i]=1;}
    sort(a,a+n);
    for(int i=1;i<n;i++)
        if(a[i-1]!=a[i]){cut++;}else{b[i]=0;}
    cout<<cut<<endl;
    for(int i=0;i<n;i++)
        if(b[i])cout<<a[i]<<" ";
    return 0;
}
