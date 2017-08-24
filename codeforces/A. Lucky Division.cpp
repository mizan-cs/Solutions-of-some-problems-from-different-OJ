#include<iostream>
using namespace std;

bool isFound(int number){
    while(number!=0){
        if((number%10)!=7 && (number%10)!=4){
            return 1;
        }
        number = number/10;
    }
    return 0;
}

int main()
{
    int n;
    cin>>n;



    if(n>0){
        if(n%4==0||n%7==0||n%47==0){
        cout<<"YES"<<endl;
    }else if(isFound(n)==0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}
