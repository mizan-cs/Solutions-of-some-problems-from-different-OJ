#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int low=0,high=0;
    int time=0;
    if(a>b&&a>c){
        high=a;
    }else if(b>a&&b>c){
        high=b;
    }else{
        high=c;
    }

    if(a<b&&a<c){
        low=a;
    }else if(b<a&&b<c){
        low=b;
    }else{
        low=c;
    }

//    cout<<high<<"-- "<<low<<endl;

    while(low<=high){
        time++;
        low++;
    }
    cout<<time-1<<endl;
}
