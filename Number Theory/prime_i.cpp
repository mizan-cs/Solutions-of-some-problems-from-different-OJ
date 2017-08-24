#include<bits/stdc++.h>
using namespace std;

int main()
{
    int jhuri[120];
    for(int i=0; i<=120; i++)
    {
        jhuri[i]=1;
    }
    jhuri[1]=0;

    for(int i=2; i<=sqrt(120)+1; i++)
    {
        if(jhuri[i]==1)
        {
            for(int j=i+i; j<120; j=j+i)
            {
                jhuri[j]==0;
            }
        }

    }

}
