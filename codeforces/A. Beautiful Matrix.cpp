#include<iostream>
using namespace std;


int main()
{
    int matrix[5][5];

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin>>matrix[i][j];
        }
    }

    int m=0,n=0;

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            while(matrix[i][j]!=0)
            {
                m=i;
                n=j;
                break;
            }
        }
    }
    int movement=0;

    if(m==2&&n==2)
    {
        cout<<0<<endl;
        return 0;
    }

    if(m>2)
    {
        while(m!=2)
        {
            movement++;
            m--;
        }
    }
    else
    {
        while(m!=2)
        {
            movement++;
            m++;
        }
    }

    if(n>2)
    {
        while(n!=2)
        {
            movement++;
            n--;
        }
    }
    else
    {
        while(n!=2)
        {
            movement++;
            n++;
        }
    }

    cout<<movement<<endl;

    return 0;
}
