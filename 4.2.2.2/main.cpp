#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
const ll N=10009;
const ll INF=1e9;

queue<int> q;
ll d[N];

int main() {
	vii adj[N];
	ll n,s;
	cin>>n>>s;
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		adj[a].push_back(make_pair(b,0));
		d[a]=INF;
		d[b]=INF;
	}
	q.push(s);
	d[s]=0;
	while(q.size()!=0){
		int u=q.front();
		q.pop();
		for(int i=0;i<adj[u].size();i++){
			ii v=adj[u][i];
			if(d[v.first]==INF){
				d[v.first]=d[u]+1;
				q.push(v.first);
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<d[i]<<" ";
	}
	return 0;
}
