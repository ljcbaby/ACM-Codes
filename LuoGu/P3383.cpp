#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n,m,t,len=0;
bool a[10000010];
vector<int> v;

void zhishu(int n){
	a[0]=1;
	a[1]=1;
	int j;
	for(int i=2;i<n;i++){
		if(!a[i]){
			v.push_back(i);
			len++;
		}
		j=0;
		while(j<len){
			int fa=i*v[j];
			if(fa<n){
				a[fa]=1;
			}else{
				break;
			}
			j++;
		}
	}
}

int main()
{
    ios::sync_with_stdio(0);
	freopen("1.in","r",stdin);
	freopen("1.out","w",stdout);
	cin>>n>>m;
	zhishu(10000005);
	for(int i=0;i<m;i++){
		cin>>t;
		if(!a[t]){cout<<"Yes"<<endl;continue;}
		cout<<"No"<<endl;
	}
    return 0;
}
