#include<ostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int big_odd=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            big_odd=0;
            for(int j=i+1;j<n;j++){
                if(arr[j]%2 != 0){
                    if(big_odd<arr[j]){
                        big_odd=arr[j];
                    }
                }
            }
            arr[i]=big_odd;
        }
    }
for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
