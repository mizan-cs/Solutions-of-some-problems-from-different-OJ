#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
    int ind = 0;
    int len;
    int N;
    cin>>len>>N;
    int arr1[100], arr2[100], ans;

    for(int i = 0; i < len; i++)
    {
        arr1[i] = i;
    }

    for(int i=len-1;i>0;i--)
    {
        arr2[ind++] = arr1[i];
    }
    for(int i = 0; i < len; i++)
            {
                if(arr2[i]==N){
                ans = i;
                break;
            }
            }
        cout<<"Case "<<j+1<<": "<<ans<<endl;
    }
    return 0;
}
