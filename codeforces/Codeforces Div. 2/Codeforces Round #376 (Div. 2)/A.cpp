#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main(){
    string str;
    cin>>str;
    char c='a';
    int time=0,i=0,l=str.size();
    while(str[i]!='\0'){
        time+=min(abs(str[i]-c),(26-abs(str[i]-c)));
        c=str[i];
        i++;

    }

   cout<<time<<endl;

    return 0;
}
