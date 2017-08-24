#include<iostream>
#include<string>
#include<string.h>

using namespace std;

int main()
{
    string s;
    cin>>s;

    int h=0,e=0,l=0,o=0;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='h')
        {
            h++;
            for(int j=i; j<s.size(); j++)
            {
                if(s[j]=='e')
                {
                    e++;
                    for(int k=j; k<s.size(); k++)
                    {
                        if(s[k]=='l')
                        {
                            l++;
                            for(int m=k+1; m<s.size(); m++)
                            {
                                if(s[m]=='l')
                                {
                                    l++;
                                    for(int n=m; n<s.size(); n++)
                                    {
                                        if(s[n]=='o')
                                        {
                                            o++;
                                            cout<<"YES"<<endl;
                                            return 0;
                                        }
                                    }
                                }
                            }
                        }
                    }

                }
            }
        }
    }

    cout<<"NO"<<endl;

    return 0;
}
