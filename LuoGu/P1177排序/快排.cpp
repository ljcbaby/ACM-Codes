#include<bits/stdc++.h>
using namespace std;

int a[100000],n;
void swapa(int x,int y){int t=a[x];a[x]=a[y];a[y]=t;}

void qsort(int l,int r){
    if(l>=r){return;}
    if(r==l+1){if(a[l]>a[r]){swapa(l,r);}return;}
    swapa(l,(l+r)>>1);
    int na=a[l],i=l,j=r;
    while(i<j){
        while((i<j)&&(a[j]>=na)){j--;}
        if(i<j){a[i]=a[j];}
        while((i<j)&&(a[i]<=na)){i++;}
        if(i<j){a[j]=a[i];}
    }
    a[i]=na;
    qsort(l,i);qsort(i+1,r);
}

int main(){
    ios::sync_with_stdio(0);
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    qsort(0,n-1);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
