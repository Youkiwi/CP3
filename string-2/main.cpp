#include <iostream>
#include <string>
using namespace std;
typedef long long ll;
string t,p;
ll a,b;
bool flag;

int main() {
	getline(cin,t);
	getline(cin,p);
	while((a=t.find(p))!=string::npos){
		flag=1;
		cout<<a+b<<" ";
//		cout<<a<<" ";
		t=t.substr(a+1);
		b+=a+1;
		a=t.find(p);
	}
	if(!flag){
		cout<<-1;
	}
	return 0;
}
