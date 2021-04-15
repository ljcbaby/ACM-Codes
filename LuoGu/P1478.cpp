#include<bits/stdc++.h>
using namespace std;

struct node{
    int c,f;
    bool operator < (const node& n) const {
        return this->c<n.c;
    }
};

int n,s,a,b;
node x[5000];

int main(){
    ios::sync_with_stdio(false);
    cin>>n>>s>>a>>b;
    if(n==0){cout<<0;return 0;}
    a=a+b+1;
    b=0;
    for(int i=0;i<n;i++){
        cin>>x[i].f>>x[i].c;
        if(x[i].f<a){x[i].f=1;}else{x[i].f=0;}
    }
    sort(x,x+n);
    int i=0;
    while(s>=0){
        if(x[i].f){
            s-=x[i].c;
            b++;
        }
        i++;
    }
    cout<<b-1;
    return 0;
}
