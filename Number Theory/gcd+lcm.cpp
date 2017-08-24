#include<iostream>
using namespace std;
int gcd(int m,int n)
{

    if (m<n) swap(m,n);
    while(m%n!=0){
        int temp =m;
        m=n;
        n=temp%n;
    }
    return n;
}
int lcm(int m,int n)
{
    return m*n/gcd(m,n);
}
int main()
{
    cout<<gcd(12,16)<<endl;
    return 0;
}
