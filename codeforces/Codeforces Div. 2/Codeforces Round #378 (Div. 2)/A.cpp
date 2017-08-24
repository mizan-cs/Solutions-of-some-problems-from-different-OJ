#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<string>
#include<math.h>
#include<vector>
#include<stdlib.h>

#define mizan25 int main()

using namespace std;
mizan25
{
    string str;
    cin>>str;

    int jump_p[100];

    int m=1,g_posation=0,jump=0,j=0,v_pos;
    for(int i=0; i<str.size();i++){
        if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='Y'){
                jump_p[j]=m-g_posation;
                g_posation=m;
                j++;
                }
                m++;
        }


    int last=0;
    if(g_posation<str.size()){
        last=str.size()-g_posation+1;
    }
    int maxi=jump_p[0];
    for(int i=0;i<j-1;i++){
        if(maxi<jump_p[i+1]){
            maxi=jump_p[i+1];
        }
    }
    if(last<=maxi){
        cout<<maxi<<endl;
    }else{
        cout<<last<<endl;
    }

}
