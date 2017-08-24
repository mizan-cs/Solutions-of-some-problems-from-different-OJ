#include<bits/stdc++.h>
using namespace std;

typedef pair<int, int> PII;

vector<PII> v;

bool cmp(PII A, PII B)
{
    return A.second*B.first > A.first*B.second;
}

int main()
{
    int n,w,ans=0;
    cin>>n;

    for(int i=0;i<n;i++){
        int waight,price;
        cin>>waight>>price;
        v.push_back(PII(waight,price));
    }

    sort(v.begin(),v.end(),cmp);

    cin>>w;

    for(int i=0;i<n;i++){
        int z = min(w,v[i].first);
        w-=z;
        ans += z*v[i].second;
    }
}
