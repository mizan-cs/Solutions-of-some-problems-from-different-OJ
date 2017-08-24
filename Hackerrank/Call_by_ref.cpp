#include<iostream>

using namespace std;

int swapvalue(int &a, int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

int main()
{
    int x=10,y=20;
    cout<<"After Swap x = "<<x<<" y = "<<y<<endl;

    swapvalue(x,y);
    cout<<"Before Swap x = "<<x<<" y = "<<y<<endl;

    return 0;
}
