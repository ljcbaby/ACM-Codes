#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

struct node{
    int data;
    node *next; 
};

node *start,*pos;
int n,m;

int main(){
	// freopen("1.in","r",stdin);
	// freopen("1.out","w",stdout);
	// freopen("1.err","w",stderr);
    // cin >> n >> m;
    start = new node;
    pos = start;
    pos->data = 1;
    for(int i=2;i <= n;i++){
        pos->next = new node;
        pos = pos->next;
        pos->data = i;
    }
    pos->next = start;
    while(pos->next != pos){
        for(int i=1;i < m;i++)pos = pos->next;
        cout << pos->next->data << " ";
        start = pos->next;
        pos->next = pos->next->next;
        delete start;
    }
    cout << pos->data;
    return 0;
}