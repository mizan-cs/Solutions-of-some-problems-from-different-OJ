#include<iostream>
using namespace std;

int main()
{
    int m[10][10];

    int r,c;
    cin>>r>>c;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(j%2==0)
            {
                m[i][j]=0;
            }
            else
            {
                m[i][j]=1;
            }
        }
    }

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<m[i][j]<<"\t";
        }
        cout<<endl<<endl;
    }


    return 0;
}
