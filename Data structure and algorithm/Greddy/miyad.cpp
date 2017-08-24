#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[100000];
    int cost = 0;
    cin>>n;
    for(int i = 0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0; i<n; i++)
    {
        cost++;
        int k = i;
        while(a[i+1]-a[k]<=4)
        {
            i++;
        }
    }
    cout<<cost;
    return 0;
}
