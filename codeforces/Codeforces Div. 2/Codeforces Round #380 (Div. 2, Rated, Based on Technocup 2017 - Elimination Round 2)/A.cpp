#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    string s2;
    int o=0,g=0;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='o'||s[i]=='g')
        {
            o=0;
            g=0;
            while(s[i]=='o'||s[i]=='g')
            {
                if(s[i]=='o')
                {
                    o++;
                }
                else
                {
                    g++;
                }
                i++;
            }

            if(o==g)
            {
                for(int j=0; j<g+o; j++)
                {
                    s2[j]=s[j];
                }
            }
            else
            {
                for(int j=0; j<g+o; j++)
                {
                    s2[j]='*';
                }
            }

        }else{
            s2[i]=s[i];
        }
    }

    cout<<s2<<endl;
}
