#include<bits/stdc++.h>
using namespace std;

priority_queue<int,vector<int>,greater<int> > a;
int n,t;

int main(){
    ios::sync_with_stdio(0);
    cin>>n;
    for(int i=0;i<n;i++){cin>>t;a.push(t);}
    for(int i=0;i<n;i++){t=a.top();a.pop();cout<<t<<" ";}
    return 0;
}

