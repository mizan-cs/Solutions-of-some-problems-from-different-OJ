#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll f(string m, string s) {
	int pos = (s+s).find(m);
	cout<<pos<<endl;
	if(pos == string::npos) return 1e9;
	return pos;
}
int main(int argc, char const *argv[]) {

//    cout<<string::npos<<endl;
//
//    string str1 = "xzzwo",str2 = "zwoxz";
//    cout<<str1+str1<<endl;
//    cout<<str2<<endl;
//    cout<<(str1+str1).find(str2);



	int n; cin>>n; string str[n];
	ll Min = 1e9;
	for(int i=0; i<n; i++)
		cin>>str[i];
	for(int i=0; i<n; i++) {
		string m = str[i];
		ll cnt = 0;
		for(int j=0; j<n; j++) if(i != j) {
			cnt += f(m, str[j]);
		} Min = min(Min, cnt);

		cout<<i+1<<" is done"<<endl;
	}
	if(Min >= 1e9) Min = -1;
	cout<<Min<<endl;
}
