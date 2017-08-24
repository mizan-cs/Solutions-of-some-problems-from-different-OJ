
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
    int m,n,point =0,c=0;

    cin>>m>>n;

    point=m*n;

    while(point){
        m--;
        n--;
        point=m*n;
        c++;
    }

    if(c%2!=0){
        cout<<"Akshat"<<endl;
    }else{
        cout<<"Malvika"<<endl;
    }

}
