#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int r=0,b=0,y=0,g=0;
    string siz[3];
    int k=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='!')
        {
            int j=i+4;
            if(s[j]=='R')
            {
                siz[k]='R';
                cout<<siz[k]<<endl;
            }
            if(s[j]=='B')
            {
                siz[k]='B';
                cout<<siz[k]<<endl;
            }
            if(s[j]=='Y')
            {
                siz[k]='Y';
                cout<<siz[k]<<endl;
            }
            if(s[j]=='G')
            {
                siz[k]='G';
                cout<<siz[k]<<endl;
            }
        }else{
            siz[k]=s[i];
            cout<<siz[k]<<endl;
        }

        k++;

        if(k==4){
            break;
        }
    }

    for(int i=0;i<s.size();i++){
        if(s[i]=='!'){
            for(int j=0;j<4;j++){
                if(s[i]==siz[j]){
                    if(siz[j]=='R'){
                        r++;
                        break;
                    }
                    if(siz[j]=='B'){
                        b++;
                        break;
                    }
                    if(siz[j]=='Y'){
                        y++;
                        break;
                    }
                    if(siz[j]=='G'){
                        g++;
                        break;
                    }
                }
            }
        }
    }

    cout<<r<<b<<y<<g<<endl;
}
