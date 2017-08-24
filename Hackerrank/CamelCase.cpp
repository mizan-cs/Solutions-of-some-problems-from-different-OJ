#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;

    int sen=0;
    for(int i=0;i<s.size();i++){
        if((int)s[i]>=65&&(int)s[i]<=90){
            sen++;
        }
    }

    cout<<sen+1<<endl;
}
