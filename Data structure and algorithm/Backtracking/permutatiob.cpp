#include<bits/stdc++.h>
using namespace std;

int used[20],number[20];

//void initialize()
//{
//    for(int i=0; i<=20; i++)
//    {
//        used[i]=0;
//        number[i]=0;
//    }
//
//}

void permutation(int at, int n)
{
    cout<<"Starting permutation.... with at = "<<at<<" and n = "<<n<<endl;
    if(at == n+1)
    {
        cout<<at<<"=="<<n<<" condition true printing all "<<endl;

        for(int i=1; i<=n; i++)
        {
            cout<<number[i]<<" ";
        }
        cout<<endl;
        return;
    }

    for(int i=1; i<=n; i++)
    {
        cout<<"used["<<i<<"]=="<<used[i]<<endl;
        if(!used[i])
        {
            cout<<i<<" did't use so.."<<endl;
//            cout<<"i = "<<i<<" at = "<<at<<"Here we go..."<<endl;
            used[i] = 1;
            cout<<"used["<<i<<"] = 1"<<endl;
            number[at] = i;
            cout<<"number["<<at<<"] = "<<i<<endl;
            cout<<"permutation calling with:\n permutation("<<at+1<<","<<n<<")"<<endl<<endl;;
            permutation(at+1,n);
            used[i]=0;
            cout<<"used["<<i<<"]=0"<<endl;
            cout<<"-----------------------END-------------------------"<<endl<<endl;
        }
    }
}

int main()
{
    permutation(1,3);

}
