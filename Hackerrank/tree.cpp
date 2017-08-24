#include<iostream>

using namespace std;

int main()
{
        int t;
        cin>>t;
        while(t--){
                int tree=1;
                int n;
                cin>>n;
                for(int c=1;c<=n;c++){
                        if(c%2==0){
                                tree++;
                        }
                        else{
                               tree*=2;
                        }
                }

                cout<<tree<<endl;
        }
return 0;

}

