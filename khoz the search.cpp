#include<iostream>
#include <bits/stdc++.h>
#include<stdlib.h>
#include<string>
#include<string.h>

using namespace std;

int main()
{
    int n,i;
    char str[100000];
    cin>>n>>i;


    sprintf(str,"%d",n);
    if(strlen(str)<i){
        cout<<"Overflow"<<endl;
        return 0;
    }
    cout<<str[i-1]<<endl;
}
