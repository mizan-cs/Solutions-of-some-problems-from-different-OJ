#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b;
    cin>>c>>d;
    int rick=0,morty=0;
    int r[200],m[200];
    int k=0;
    for(int i=1; i<=100; i++){
        r[k]=b+i*a;
        m[k]=d+i*c;
        k++;
    }

    for(int i=0;i<100;i++){
        for(int j=0;j<100;j++){
            if(r[i]==m[j]){
                cout<<r[i]<<endl;
                return 0;
            }
        }
    }
    cout<<-1<<endl;

    return 0;
}
