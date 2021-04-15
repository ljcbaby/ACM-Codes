#include<bits/stdc++.h>
using namespace std;

int a[100000],n,t,fi,ai;

int main(){
    ios::sync_with_stdio(0);
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++){
        fi=i;ai=a[i];
        for(int j=i+1;j<n;j++)
            if(ai>a[j]){ai=a[j];fi=j;}
        if(fi!=i){t=a[i];a[i]=a[fi];a[fi]=t;}
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
