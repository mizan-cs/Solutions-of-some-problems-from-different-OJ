#include<iostream>
using namespace std;
int fibonacci(int n);

int main()
{
    long long n;

    cin>>n;


    int a=0,b=1,c;

    for(int i=2;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
        cout<<c<<endl;
    }
    cout<<fibonacci(n)<<endl;
}

int fibonacci(int n)
{
    if(n==0) return 0;
    if(n==1) return 1;

    return fibonacci(n-1)+fibonacci(n-2);
}
