#include<iostream>
#include<stdio.h>
#include<string>
#include<string.h>

using namespace std;

int main()
{
    string str;
    int n,posation=0,i=0;

    cin>>n;
    cin>>str;

    while(str[i]=='<'&&i<n){
        posation++;
        i++;
    }
    i=str.size()-1;
    while(str[i]=='>'&&i>=0){
        posation++;
        i--;
    }

    cout<<posation<<endl;

}
// >><<><<<>
