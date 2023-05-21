#include <iostream>
#include <string>
using namespace std;
typedef long long ll;
string t;
ll a,b;
bool flag;

int main() {
	getline(cin,t);
	string::iterator it=t.begin();
	while(it!=t.end()){
		if('A'<=*it&&*it<='Z'){
			*it+=32;
		}
		cout<<*it;
		it++;
	}
	return 0;
}
