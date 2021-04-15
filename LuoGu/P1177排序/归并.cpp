#include<bits/stdc++.h>
using namespace std;

int a[100000],n;

void swapa(int x,int y){int t=a[x];a[x]=a[y];a[y]=t;}

void msort(int l,int r){
    if(r-l==1){if(a[l]>a[r]){swapa(l,r);}return;}
    if(l==r){return;}
    const int len=r-l+1;
    int mid=(r+l+1)>>1;
    msort(l,mid-1);msort(mid,r);
    int f1=l,f2=mid,fb=0,b[len];
    while(fb<len){
        if(f1==mid){b[fb]=a[f2];fb++;f2++;continue;}
        if(f2==r+1){b[fb]=a[f1];fb++;f1++;continue;}
        if(a[f1]<a[f2]){b[fb]=a[f1];fb++;f1++;}else{b[fb]=a[f2];fb++;f2++;}
    }
    fb=0;
    for(f2=l;f2<=r;f2++){a[f2]=b[fb];fb++;}
}

int main(){
    ios::sync_with_stdio(0);
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    msort(0,n-1);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}

