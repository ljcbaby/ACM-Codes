#include <bits/stdc++.h>
using namespace std;

vector<long long> vn;

void deal(long long m)
{
	long long f_lower=lower_bound(vn.begin(),vn.end(),m) - vn.begin();
	//cout << f_lower << " " <<vn.size()<<endl;
	if(f_lower==vn.size())
	{
		cout << vn[f_lower-1] << endl;
		return;
	}
	if (m==vn[f_lower])
	{	
		cout << m << endl;
		return;
	}
	int up_m,down_m;
	up_m=vn[f_lower]-m;
	down_m=(f_lower!=0 ? m-vn[f_lower-1] : 1000000000);
	//cout << up_m << endl;
	//cout << down_m << endl;
	cout << (down_m<=up_m ? m-down_m : m + up_m) << endl;
}

int main()
{
	freopen("1.in","r",stdin);
	freopen("1.out","w",stdout);
	long long n,m,temp;
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		cin >> temp;
		vn.push_back(temp);
	}
	cin >> m;
	for(int i=1;i<=m;i++)
	{
		cin >> temp;
		deal(temp);		
	}
	//sort(vn.begin(),vn.end());
	//for(int i=1;i<=m;i++)
		//deal(vm[i-1]);
	return 0;
}