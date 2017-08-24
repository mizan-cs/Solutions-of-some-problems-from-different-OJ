#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool palin(string str) {
	return (str == string(str.rbegin(), str.rend()));
}
int main() {

    string str;
    cin>>str;
    char _ch = 'a';
    string str2;
    for(_ch='a';_ch <= 'z';_ch++){
        str2 = str;
        for(int i=0;i<str.size();i++){
            if(str2[i] == _ch){
                continue;
            }
            str2[i] = _ch;
            if(palin(str2)==1){
                cout<<"YES"<<endl;
                return 0;
            }
            str2 = str;
        }
    }

    cout<<"NO"<<endl;

	return 0;
}
