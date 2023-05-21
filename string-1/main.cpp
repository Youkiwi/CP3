#include <iostream>
#include <string>
using namespace std;
typedef long long ll;
string s[100];
ll a;

int main() {
	getline(cin,s[a]);
	while(s[a].substr(0,7)!="......."){
		a++;
		getline(cin,s[a]);
	}
	string ss=s[0];
	for(int i=0;i<a;i++){
		ss+=" "+s[i];
	}
	cout<<ss<<endl;
	return 0;
}
