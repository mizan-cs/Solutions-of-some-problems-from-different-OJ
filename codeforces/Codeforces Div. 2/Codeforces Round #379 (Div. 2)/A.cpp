#include<iostream>
#include<string>
#include<string.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    int a=0,d=0;
    for(int i=0;i<n;i++){
        if(str[i]=='A'){
            a++;
        }else{
            d++;
        }
    }

    if(a==d){
        cout<<"Friendship"<<endl;
        return 0;
    }

    if(a>d){
        cout<<"Anton"<<endl;
        return 0;
    }

    if(a<d){
        cout<<"Danik"<<endl;
        return 0;
    }

}
