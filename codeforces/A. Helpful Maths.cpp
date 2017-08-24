#include<iostream>
#include<string>
#include<string.h>
using namespace std;

int main()
{
    string num_str;
    cin>>num_str;
    int num[100];
    int n=0;

    for(int i=0;i<num_str.size();i++){
        if(num_str[i]!='+'){
            num[n]=(int)num_str[i]-48;
            n++;
        }
    }
    int temp;

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(num[j]>num[j+1]){
                temp = num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<num[i];
        if(i!=n-1){
            cout<<"+";
        }
    }

    return 0;
}
