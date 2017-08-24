#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j=0,k,sum=0,a,b,c,d,e,f,g,h;
    char s[200002];
    cin>>n;
    cin>>s;
        if(s[0]=='>')
        {
            while(s[j]=='>')
            {
                j++;
            }
            if(j==n)
            {
                sum=n;
            }
            if(s[n-1]=='<')
            {sum=0;
            }
            if(s[n-1]=='>'&&j<n)
            {
                k=1;
                while(s[n-k]=='>')
                {
                    k++;
                }
                sum=sum+k-1;
            }

        }
        if(s[0]=='<')
        {
            a=0;
            while(s[a]=='<'&&a<n)
            {
                sum++;
                a++;
            }
            if(a<n)
            {
                b=0;
                if(s[n-1]=='>')
                {
                    while(s[n-b-1]=='>')
                    {
                        sum++;
                        b++;
                    }
                }
            }
        }
cout<<sum;


}
