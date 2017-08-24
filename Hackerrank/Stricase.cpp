#include<iostream>
using namespace std;

int main()
{
    int t,i,j;

    cin>>t;

    for(i=0;i<t;i++){
        for(j=i;j<t;j++){
            cout<<" .";
        }
        cout<<"";
    }
    for(i=t;i>0;i--){
        for(j=0;j<t;j++){
            cout<<"#";
        }

        cout<<"\n";
    }

    return 0;
}
