#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[10000];
    int dis_arr[10000];
    int m=0;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int m_dis=10000,total_dis=0,dis_count=0;

    for(int i=0;i<n-1;i++){
//        cout<<"For "<<i<<" _____"<<endl;
        for(int j=i+1;j<n;j++){
//            cout<<arr[i]<<" with "<<arr[j]<<" "<< (arr[i]==arr[j])<<endl;
            if(arr[i]==arr[j]){
                dis_count=j-i;
                dis_arr[m]=dis_count;
                m++;
                break;
            }
        }
    }

    if(m){
        sort(dis_arr,dis_arr+m);
        cout<<dis_arr[o]<<endl;
    }else{
        cout<<-1<<endl;
    }
}
