#include<iostream>
#include<string.h>
#include<string>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;

        if(str.size()<=10)
        {
            cout<<str<<endl;
        }
        else
        {
            int n=str.size();
            cout<<str[0]<<str.size()-2<<str[n-1]<<endl;
        }
        str.


    }

    return 0;
}
