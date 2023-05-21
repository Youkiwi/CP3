#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef long long ll;
string a;
vector<string> v;

ll locate_word(string ss){
	string::iterator it = ss.begin();
	while(it!=ss.end()){
		if(!('a'<=*it&&*it<='z'||'A'<=*it&&*it<='Z')&&!('0'<=*it&&*it<='9')){
			break;
		}
		it++;
	}
	return it-ss.begin();
}

ll trs(string ss){
	ll ans=0;
	string::iterator it = ss.begin();
	while(it!=ss.end()){
		ans=ans*10+(*it-48);
		it++;
	}
	return ans;
}

string solve(string s){
	string ans="";
	while(s!=""){
		ll loc=locate_word(s);
		while(loc==0){
			ans+=s[loc];
			if(s.size()==loc){
				return ans;
			}
			s=s.substr(loc+1); 
			loc=locate_word(s);
		}
		string t=s.substr(0,loc);
		if(t<"A"){
			ll num=trs(t);
			string str=v[v.size()-num];
			ans+=str+s[loc];
			v.push_back(str);
		}
		else{
			v.push_back(t);
			ans+=t+s[loc];
		}
		if(s.size()==loc){
			return ans;
		}
		s=s.substr(loc+1);
	}
	return ans;
}

int main() {
	getline(cin,a);
	while(a!="0"){
		cout<<solve(a)<<endl;
		getline(cin,a);
	}
	return 0;
}
