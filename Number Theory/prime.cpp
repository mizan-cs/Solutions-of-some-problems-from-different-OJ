#include<bits/stdc++.h>
using namespace std;


int main()
{
    int N=1000;
    int number[N];
    number[1]=0;
    for(int i=2;i<N;i++){
        number[i]=1;
    }

    for(int i=2;i*i<=N;i++){
        if(number[i]){
            for(int j=i*2;j<=N;j=j+i){
                number[j]=0;
            }
        }
    }

    int p=0;
    for(int i=2;i<N;i++){
        if(number[i]==1){
            printf("%d\t",i);
        }
    }

}
