#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int c[n];

    for(int i=0;i<n;i++){
        cin>>c[i];
    }

    sort(c,c+n);

    int ans=0;
    for(int i=0;i<n;i++){
        ans+=c[n-1]-c[i];
    }

    cout<<ans<<endl;

}
