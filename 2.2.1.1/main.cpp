#include <iostream>
#include <set>
using namespace std;
typedef long long ll;
set<int> s;

int main() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		s.insert(a); 
	}
	if(s.size()==n){
		cout<<0;
	}
	else{
		cout<<1;
	}
	return 0;
}
