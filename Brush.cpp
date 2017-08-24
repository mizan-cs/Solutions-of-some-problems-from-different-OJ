#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        cout<<endl;
        int n,total_dust=0;
        cin>>n;
        for(int j=0;j<n;j++){
            int dust_amount;
            cin>>dust_amount;
            total_dust=total_dust+dust_amount;
        }
        cout<<"Case "<<i<<": "<<total_dust<<endl;
    }

    return 0;
}
