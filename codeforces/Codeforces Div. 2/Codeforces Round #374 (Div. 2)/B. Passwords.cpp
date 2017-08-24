#include<iostream>
#include<string>
#include<string.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;

    string pass[n];
    for(int i=0;i<n;i++){
        cin>>pass[i];
    }
    string b_pass;
    cin>>b_pass;

    for(int i=0;i<n;i++){
        cout<<pass[i].length()<<"--"<<endl;
    }




}
