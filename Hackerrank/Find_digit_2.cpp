#include<iostream>
using namespace std;

int main()
{
        int test;

        cin>>test;

        while(test--){
                int n;
                cin>>n;
                int copy_of_n=n;
                int mod=0,temp=0;
                int z=0,ans=0;

                while(copy_of_n!=0){
                        mod=copy_of_n%10;
                        temp=copy_of_n/10;

                        if(mod==0){
                               z++;
                        }
                        else if(n%mod==0){
                                ans++;
                        }
                        copy_of_n=temp;
                }

                cout<<ans<<endl;
        }

        return 0;

}
