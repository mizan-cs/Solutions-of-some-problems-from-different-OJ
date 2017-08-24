#include<iostream>

using namespace std;

int main()
{
    int t,p=0,m=0,zero;
    float dp,dm,dz;
    scanf("%d",&)

    int arr[t],i;
    for(i=0;i<t;i++){
        cin>>arr[i];
        if(arr[i]>0){
            p++;
        }
        else if(arr[i]<0){
            m++;
        }
        else{
            zero++;
        }
    }

    dp=p/t;
    dm=m/t;
    dz=zero/t;

    cout<<dp<<endl;

    return 0;
}
