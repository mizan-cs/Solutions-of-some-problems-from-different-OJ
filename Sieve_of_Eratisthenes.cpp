#include<iostream>
using namespace std;

int prime[300000],nPrime;
int mark[1000002];

int main()
{
    int n;
    cin>>n;

    int i,j,limit = sqrt(n*1.)+2;

    mark[1]=1;

    for(i=4;i<=n;i+=2) mark[i]=1;

    prime[nPrime++]=2;


    for(i=3;i<=n;i+=2){
        if(!mark[i]){
            prime[nPrime++]=1;
        }
    }
}
