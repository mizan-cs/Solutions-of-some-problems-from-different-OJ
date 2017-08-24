#include<iostream>
#include<bits/stdc++.h>
#include<math.h>

using namespace std;

const long long size = 100000000;
bool arr[size];

int main(){
    for(int i=1;i<=size;i++){
        arr[i]=true;
    }

    int root=sqrt(size);
    long long primeIndex=1;
    for(int i=2;i<=root;i++){
        if(arr[i]){
            primeIndex=i;
            for(int j=i*i;j<=size;j=j+i){
                arr[j]=false;
            }
        }
    }

    for(int i=2;i<=size;i++){
        if(arr[i]){
            cout<<i<<endl;
        }
    }

}
