#include<iostream>
using namespace std;

int main()
{

    long long int n,a,b,p,q,chocolates=0;

    cin>>n>>a>>b>>p>>q;
    for(long long int i=1;i<=n;i++){
        if(i%b==0){
            chocolates+=q;
//            cout<<i<<" for RED and + "<<p<<" And c="<<chocolates<<endl;
            continue;
        }

        if(i%a==0){
            chocolates+=p;
//            cout<<i<<" for Green and + "<<q<<" And c="<<chocolates<<endl;
        }
    }
    cout<<chocolates<<endl;
}
