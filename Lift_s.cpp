#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    int a,b;
    for(int i=1; i<=t; i++){
        cin>>a>>b;
        if(a==b){
            cout<<"Case "<<i<<": "<<(19+(4*b))<<endl;
        }
        else if(a<b){
            cout<<"Case "<<i<<": "<<(19+(4*b))<<endl;
        }
        else{
            cout<<"Case "<<i<<": "<<(19+(4*a))+((a-b)*4)<<endl;
        }
    }

    return 0;
}
