#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n,x=1,y=1,fx=1,fy=-1;

int main()
{
    ios::sync_with_stdio(0);
    cin>>n;
    for(int i=1;i<n;i++){
        x+=fx;y+=fy;
        if(x==0){x=1;fx=-fx;fy=-fy;}
        if(y==0){y=1;fx=-fx;fy=-fy;}
    }
    cout<<y<<"/"<<x;
    return 0;
}
