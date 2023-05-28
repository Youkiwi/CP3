#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
const ll N=209;
const ll INF=1e9;
vii to[N];
ll n,m;
ll col[N];
ll vst[N];
bool is_bi;

void color(int s){
	queue<int> q;
	q.push(s);
	col[s]=0;
	while(q.size()!=0){
		int u=q.front();
		q.pop();
		for(int i=0;i<to[u].size();i++){
			ii v=to[u][i];
			if(col[v.first]==INF){
				col[v.first]=!col[u];
				q.push(v.first);
			}
		}
	}
}

void check(int s){
	vst[s]=0;
	for(int i=0;i<to[s].size();i++){
		if(col[to[s][i].first]==col[s]){
			is_bi=0;
			return;
		}
		if(vst[to[s][i].first]==INF){
			check(to[s][i].first);
		}
	}
}

int main() {
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		to[b].push_back(make_pair(a,0));
		to[a].push_back(make_pair(b,0));
	}
	for(int i=0;i<n;i++){
		col[i]=INF;
	}
	color(0);
	for(int i=0;i<n;i++){
		vst[i]=INF;
	}
	check(0);
	cout<<(is_bi?"bicolorable":"not bicolorable");
	return 0;
}
