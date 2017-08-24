#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int a[200];
    int n,m;
    int ans =0;
    while(t--){
        ans =0;
        cin>>n>>m;
        for(int i=0;i<n;i++){
            cin>>a[i];
            ans=ans+a[i]/m;
        }
        cout<<ans<<endl;
    }
}
