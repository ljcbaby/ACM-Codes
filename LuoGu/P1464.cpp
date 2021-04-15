#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll a,b,c,rw[21][21][21];

ll w(ll a,ll b,ll c){
    if((a<=0)||(b<=0)||(c<=0)){a=0;b=0;c=0;}
    if((a>20)||(b>20)||(c>20)){a=20;b=20;c=20;}
    if(rw[a][b][c])return rw[a][b][c];
    if((a<b)&&(b<c)){return rw[a][b][c]=w(a,b,c-1)+w(a,b-1,c-1)-w(a,b-1,c);}
    else{return rw[a][b][c]=w(a-1,b,c)+w(a-1,b-1,c)+w(a-1,b,c-1)-w(a-1,b-1,c-1);}
}

int main()
{
    ios::sync_with_stdio(0);
    rw[0][0][0]=1;
    while(1){
        cin>>a>>b>>c;
        if((a==-1)&&(b==-1)&&(c==-1))break;
        cout<<"w("<<a<<", "<<b<<", "<<c<<") = "<<w(a,b,c)<<endl;
    }
    return 0;
}
