#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
const ll N=1009;
vii to[N];
int vst[N];
ll n,m;

void find_con(int s){
	queue<int> q;
	q.push(s);
	vst[s]=1;
	while(q.size()!=0){
		int u=q.front();
		q.pop();
		for(int i=0;i<to[u].size();i++){
			ii v=to[u][i];
			if(vst[v.first]==0){
				vst[v.first]=1;
				q.push(v.first);
			}
		}
	}
}

int main() {
	cin>>n;
	char ch;
	cin>>ch;
	m=ch-'A';
	for(int i=0;i<n;i++){
		char a,b;
		cin>>a>>b;
		to[a-'A'].push_back(make_pair(b-'A',0));
		to[b-'A'].push_back(make_pair(a-'A',0));
	}
	int ans=0;
	for(int i=0;i<m;i++){
		if(vst[i]==0){
			find_con(i);
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
