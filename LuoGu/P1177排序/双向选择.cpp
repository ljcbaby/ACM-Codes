#include<bits/stdc++.h>
using namespace std;

int a[100000],n,fi,fa,ba,bi;

int main(){
    ios::sync_with_stdio(0);
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<(n>>1);i++){
        fi=fa=i;ba=bi=a[i];
        for(int j=i+1;j<n-i;j++){
            if(a[j]>ba){ba=a[j];fa=j;continue;}
            if(bi>a[j]){bi=a[j];fi=j;}
        }
        if(fi!=i){a[fi]=a[i];a[i]=bi;}
        if(fa==i){a[fi]=a[n-i-1];a[n-i-1]=ba;continue;}
        if(fa!=n-i-1){a[fa]=a[n-i-1];a[n-i-1]=ba;}
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}

