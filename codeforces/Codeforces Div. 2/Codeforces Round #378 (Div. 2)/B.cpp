#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<string>
#include<math.h>
#include<vector>
#include<stdlib.h>

#define i_to_n for(int i=0;i<n;i++)
#define n_to_i while(n--)
#define mizan25 int main()

using namespace std;
mizan25
{
    int n;
    cin>>n;
    int a,b,ca=n;
    int sol[n][2];
    int sum_of_l=0,sum_of_r=0;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        sol[i][0]=a;
        sol[i][1]=b;
    }
    int b[100000];
    while(ca--){
    int best=0;
    int sl=0,sr=0;
    for(int i=0;i<n;i++){
        sl=sl+sol[i][1];
        sr=sr+sol[i][0];
    }
    }
}
