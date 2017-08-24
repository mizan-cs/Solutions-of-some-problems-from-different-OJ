#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n,m=0;
        cin>>n;
        int ar[n];
        for(int j=0;j<n;j++){
            cin>>ar[j];
        }
        for(int k=0;k<n-1;k++){
            if(ar[k+1]-ar[k]>m)
                m=ar[k+1]-ar[k];
        }
        cout<<"Case "<<i<<": "<<m<<endl;
    }

    return 0;
}
