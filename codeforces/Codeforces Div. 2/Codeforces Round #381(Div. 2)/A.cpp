#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, a,b,c;
    scanf("%I64d %I64d %I64d %I64d",&n,&a,&b,&c);
    if(n%4==0){
        cout<<0;
    }
    else{
        int t = 4-n%4;
        if(t==1){
            long long int y = min(a,b+c );
            cout<<min(y,3*c);
        }
        else if(t==2){
            cout<<min(min(b,2*a),2*c);
        }
        else{
            cout<<min(min(a*t,a+b),c);
        }
    }
    return 0;
}
