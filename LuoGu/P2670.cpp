#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int m,n;
char cnt[105][105],t;

void print_ltx(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++)
            putchar(cnt[i][j]);
        cout << endl;
    }
}

int main(){
	freopen("1.in","r",stdin);
	freopen("1.out","w",stdout);
	freopen("1.err","w",stderr);
    cin >> n >> m;
    for(int i=0;i<=n+1;i++)
        for(int j=0;j<=m+1;j++)
            cnt[i][j] = 48;
    for(int i=1;i<=n;i++){
        scanf("%c",&t);
        for(int j=1;j<=m;j++){
            scanf("%c",&t);
            if(t==42){
                cnt[i][j] = 42;

                if(cnt[i-1][j-1] != 42) cnt[i-1][j-1]++;
                if(cnt[i-1][j] != 42) cnt[i-1][j]++;
                if(cnt[i-1][j+1] != 42) cnt[i-1][j+1]++;
                if(cnt[i][j-1] != 42) cnt[i][j-1]++;
                if(cnt[i][j+1] != 42) cnt[i][j+1]++;
                if(cnt[i+1][j-1] != 42) cnt[i+1][j-1]++;
                if(cnt[i+1][j] != 42) cnt[i+1][j]++;
                if(cnt[i+1][j+1] != 42) cnt[i+1][j+1]++;
            }
        }
    }
    print_ltx();
    return 0;
}