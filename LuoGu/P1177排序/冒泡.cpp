#include<bits/stdc++.h>
using namespace std;

int a[100000],n,t;

int main(){
    ios::sync_with_stdio(0);
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        for(int j=0;j<n-i-1;j++)
            if(a[j]>a[j+1])
            {t=a[j];a[j]=a[j+1];a[j+1]=t;}
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}

