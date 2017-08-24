#include<bits/stdc++.h>
using namespace std;

int GCD(int a, int b)
{
    int temp;

    if(a<b)swap(a,b);
    cout<<a<<" "<<b<<"\n----------------------\n"<<endl;

    while(a%b !=0){
        temp = a;
        a=b;
        b=temp%b;
        cout<<a<<" "<<b<<endl;
    }
    return b;
    cout<<"------------------\n"<<b<<endl;
}
int main()
{
    cout<<GCD(12,16);
}
