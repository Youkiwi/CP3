#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
typedef long long ll;
ll in[1009],a[1009];

int main() {
	ll n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>in[i];
		if(in[i]>in[i-1]){
			a[i]=a[i-1]+1;
		}
		else{
			a[i]=1;
		}
	}
	ll ans=*max_element(a+1,a+n+1);
	cout<<ans;
	return 0;
}
