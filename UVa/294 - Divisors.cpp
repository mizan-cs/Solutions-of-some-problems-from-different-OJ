#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

   unsigned long long l,u,div,max_div=0,k=0,lim;

    while(t--){
        cin>>l>>u;
        max_div=0;
        for(unsigned long long i=l;i<=u;i++){
            div=0;
            lim=sqrt(i)+1;
            for(unsigned long long j=1;j<=lim;j++){
                if(i%j==0){
                    div++;
                    if(i/j>lim){
                        div++;
                    }
                }
            }

            if(div>max_div){
                k=i;
                max_div=div;
            }
        }

        cout<<"Between "<<l<<" and "<<u<<", "<<k<<" has a maximum of "<<max_div<<" divisors."<<endl;
    }

    return 0;
}
