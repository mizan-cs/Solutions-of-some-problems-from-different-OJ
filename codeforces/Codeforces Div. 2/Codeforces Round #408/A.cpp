#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,t,d,j;
    cin>>n>>m>>t;
    int house[n];
    vector<int> dist;
    for(int i=1;i<=n;i++){
        cin>>house[i];
    }

    for(int i=1;i<=n;i++){
            d=0;
        if(house[i] == 0){
            continue;
        }

        if(t>=house[i]){
            if(i<m){
                j=i;
                while(j<m){

                    d=d+10;
                    j++;
                }
//                cout<<d<<endl;
                dist.push_back(d);
            }else{
                j=i;
                while(j>m){

                    d=d+10;
                    j--;
                }
//                cout<<d<<endl;
                dist.push_back(d);
            }
        }
    }

    sort(dist.begin(),dist.end());

    cout<<dist[0]<<endl;

}
