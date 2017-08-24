#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k,q;
    cin>>n>>k>>q;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int temp=0;
    int temp_arr[n];
    while(k--){
        for(int i=0;i<n;i++){
            temp_arr[i]=arr[n-i];
        }
        for(int i=0;i<n;i++){
            arr[i]=temp_arr[i];
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
