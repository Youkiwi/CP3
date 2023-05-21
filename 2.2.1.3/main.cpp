#include <iostream>
#include <set>
using namespace std;
typedef long long ll; 
ll a[109],b[109];

int main() {
	ll n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[i]=a[i]-m;
	}
	for(int i=0;i<n;i++){
		ll l=0,r=n-1;
		while(l<r){
			ll mid=(l+r)/2;
			if(a[mid]<b[i]){
				l=mid+1;
			}
			else{
				r=mid;
			}
		}
		if(a[r]==b[i]){
			cout<<a[i]<<a[r];
			return 0;
		}
	}
	cout<<-1;
	return 0;
}
