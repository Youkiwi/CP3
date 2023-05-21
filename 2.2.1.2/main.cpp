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
		for(int j=0;j<n;j++){
			if(b[i]=a[j]){
				cout<<a[i]<<" "<<a[j]<<endl;
				return 0;
			}
		}
	}
	cout<<-1;
	return 0;
}
