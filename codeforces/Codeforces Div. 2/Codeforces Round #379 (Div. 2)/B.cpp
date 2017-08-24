#include<iostream>
#include<bits/stdc++.h>
#include<math.h>

using namespace std;

int main()
{
    int k1=2,k2=3,k3=5,k4=6;

    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int sum=0;

    while(a>=1&&c>=1&&d>=1){
        sum=sum+256;
        a--;
        c--;
        d--;
    }
    while(b>=1&&a>=1){
        sum=sum+32;
        b--;
        a--;
    }

    cout<<sum<<endl;
}
