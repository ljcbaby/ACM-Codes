#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n,len=1;
vector<int> a;

void zhishu(int n){
	a.push_back(2);
	bool f;
	int fa;
	for(int i=3;i<n;i+=2){
		f=1;
		fa=0;
		while(a[fa]<=sqrt(i)){
			if(i % a[fa] == 0){
				f=0;
				break;
			}
			fa++;
		}
		if(f){
			a.push_back(i);
			len++;
		}
	}
}

int main()
{
    ios::sync_with_stdio(0);
	cin>>n;
	zhishu(n);
	bool f=0;
	for(int i=0;i<len;i++){
		for(int j=i;j<len;j++){
			for(int k=j;k<len;k++){
				if(a[i]+a[j]+a[k]==n){
					cout << a[i] << " " << a[j] << " " << a[k];
					f=1;
					break;
				}
			}
			if(f)break;
		}
		if(f)break;
	}
    return 0;
}

