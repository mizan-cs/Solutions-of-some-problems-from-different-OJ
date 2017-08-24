#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,s_size=0,mov;
    string s;

    cin>>t;

    while(t--){
            mov=0;
        cin>>s;
        s_size=s.size();
        int last=0;
        if(s_size%2==0){
            last=s_size-1;
            for(int i=0;i<s_size/2;i++){
//                    cout<<"i = "<<i<<" last = "<<last<<endl;
                if((int)s[i]==(int)s[last]){
                    last--;
                    continue;
                }else if((int)s[i]<(int)s[last]){
                    mov+=(int)s[last]-(int)s[i];
//                    cout<<(int)s[last]<<"<"<<(int)s[i]<<" op= "<<(int)s[last]-(int)s[i]<<"\n\n"<<endl;
                    last--;
                }else{
                    mov+=(int)s[i]-(int)s[last];
//                    cout<<(int)s[i]<<">"<<(int)s[last]<<" op= "<<(int)s[i]-(int)s[last]<<"\n"<<endl;
                    last--;
                }
            }
        }else{
            last=s_size-1;
            int mid=(s_size/2)+1;

            for(int i=0;i<mid;i++){
                if((int)s[i]==(int)s[last]){
                    last--;
                    continue;
                }else if((int)s[i]<(int)s[last]){
                    mov+=(int)s[last]-(int)s[i];
                    last--;
                }else{
                    mov+=(int)s[i]-(int)s[last];
                    last--;
                }
            }
        }

        cout<<mov<<endl;
    }
}
