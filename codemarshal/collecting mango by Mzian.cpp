#include<iostream>

using namespace std;

int main()
{
    int t,question,i;

    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>question;
        char ch;
        int x[100000];
        int big[100000];
        int big_mango=0;
        int remov_e=0;
        int q=0;

        for(int i=0; i<question; i++)
        {
            cin>>ch;
            int temp=0;
            if(ch=='A')
            {
                cin>>x[i];
                if(x[i]>temp)
                {

                }
            }

            else if(ch=='R')
            {
                remov_e++;
            }

            else if(ch=='Q')
            {
                q++;

            }

            if(x[i-remov_e]>big_mango)
            {
                big_mango=x[i-remov_e];
            }
            else
            {
                big_mango=big_mango;
            }
        }

        cout<<"Case "<<i<<":\n";
    }

    return 0;
}
