#include<iostream>

using namespace std;

int main()
{
        int t,lane[100000],n;

        cin>>n>>t;
        for(int i=0;i<n;i++){
                cin>>lane[i];
        }

        while(t--){
            int enter,xit;

            cin>>enter>>xit;
           int small=lane[enter];
            for(int i=enter;i<=xit;i++){
                if(small>lane[i]){
                        small=lane[i];
                }
            }

            cout<<small<<endl;

        }

        return 0;

}
