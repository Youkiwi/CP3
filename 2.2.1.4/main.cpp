#include <iostream>
#include <set>
using namespace std;
typedef long long ll;
multiset<ll> ms;

int main() {
	ll n,m,k;
	cin>>n>>m>>k;
	for(int i=0;i<n;i++){
		ll a;
		cin>>a;
		ms.insert(a);
	}
	multiset<ll>::iterator it=ms.find(m);
	multiset<ll>::iterator eit=ms.find(k);
	for(;it!=eit;it++){
		cout<<*it;
	}
	return 0;
}
