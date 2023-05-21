#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
const ll N=10009;
const ll INF=1e9;

int n;
int d[N];
queue<int> q;
vii adj[N];
int is_reach[N][N];

void bfs(int s,int without){
	if(s==without){
		return;
	}
	is_reach[without][s]=1;
	q.push(s);
	d[s]=0;
	while(q.size()!=0){
		int u=q.front();
		q.pop();
		for(int i=0;i<adj[u].size();i++){
			ii v=adj[u][i];
			if(d[v.first]==INF&&v.first!=without){
				d[v.first]=d[u]+1;
				is_reach[without][v.first]=1;
				q.push(v.first);
			}
		}
	}
}

int main() {
	cin>>n;
	for(int i=0;i<n;i++){
		d[i]=INF;
		for(int j=0;j<n;j++){
			int a;
			cin>>a;
			if(a==1){
				adj[i].push_back(make_pair(j,0));
				adj[j].push_back(make_pair(i,0));
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			d[j]=INF;
		}
		bfs(0,i);
	}
	cout<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<!is_reach[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
