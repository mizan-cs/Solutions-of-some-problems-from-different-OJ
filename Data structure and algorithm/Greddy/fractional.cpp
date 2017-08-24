#include<bits/stdc++.h>

using namespace std;

typedef pair<int, int> PII;
vector<PII> V;

int cmp(PII A, PII B){
    return A.second * B.first > A.first * B.second;
}

int main(){
    int n,W;
    cin>>n>>W;
    for(int i=0;i<n;i++){
        int weight,price;
        cin>>weight>>price;
        V.push_back(PII(weight,price));
    }

    sort(V.begin(),V.end(),cmp);

    int ans=0;
    int remin = 0;
    for(int i=0;i<n;i++){
        if(W>=V[i].first){
            W = W-V[i].first;
            ans = ans+V[i].second;
//            cout<<"Leaving "<<W<<" pound in "<<i+1<<" Item "<<" price "<<ans<<endl;
        }else{
            ans += W * (int)(V[i].second/V[i].first);
//            cout<<"Leaving "<<W<<" pound in "<<i+1<<" Item "<<" price "<<ans<<endl;
            break;
        }

//        cout<<"Leaving "<<W<<" pound in "<<i+1<<" Item "<<" price "<<ans<<endl;
    }

    cout<<"maximum Cast : "<<ans;

}

3 50
10 60
20 100
30 120
