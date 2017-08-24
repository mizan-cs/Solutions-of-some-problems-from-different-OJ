#include<bits/stdc++.h>
using namespace std;

int main()
{
//    freopen("in.txt","r",stdin);
    int t,n,m;
    queue<pair<int,int>>q;
    priority_queue<int>pq;
    int ans;
    cin>>t;
    for(int cs=1;cs<=t;cs++){
        ans =0;
        cin>>n>>m;
        vector<int>a;
        for(int i=0,k;i<n;i++){
            cin>>k;
            a.push_back(k);
        }

        for(int i=0;i<n;i++){
            q.push(make_pair(a[i],i));
            pq.push(a[i]);
        }

        while(!q.empty()){
            if(q.front().first == pq.top()){
                ans++;
                if(q.front().second == m){
                    break;
                }
                pq.pop();
                q.pop();
            }else{
                q.push(q.front());
                q.pop();
            }
        }

        cout<<ans<<endl;

        while(!q.empty())q.pop();
        while(!pq.empty())pq.pop();
    }
    return 0;
}
