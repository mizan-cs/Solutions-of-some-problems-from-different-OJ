#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int n,sum=0,coin=0,my_amount=0;
    cin>>n;
    int a[100];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }

    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            int temp;
            if(a[j]<a[j+1])
            {
                temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }


    while(my_amount<=sum/2){
        my_amount+=a[coin];
        coin++;
    }

    cout<<coin<<endl;

}
