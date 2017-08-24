#include<iostream>
using namespace std;

int main()
{
    int a,b,c;

    cin>>a>>b>>c;

    if(c==0){
        if(a==b){
            cout<<"YES"<<endl;
            return 0;
        }
        cout<<"NO"<<endl;
        return 0;
    }
    else if(a==b){
        cout<<"YES"<<endl;
        return 0;
    }else if((b<a)&&c==-1){
        cout<<"YES"<<endl;
        return 0;
    }else if((b>a)&&c==1){
        cout<<"YES"<<endl;
        return 0;
    }

    if(c<0){
        while(a>=b){
        if(a==b){
            cout<<"YES"<<endl;
            return 0;
        }else{
            a=a+c;
        }
    }
    }else {
        while(a<=b){
        if(a==b){
            cout<<"YES"<<endl;
            return 0;
        }else{
            a=a+c;
        }
    }
    }

    cout<<"NO"<<endl;

    return 0;
}
