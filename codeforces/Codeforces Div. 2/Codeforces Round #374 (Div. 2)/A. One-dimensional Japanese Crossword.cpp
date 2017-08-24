#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char c;
    int r[n];
    for(int i=0;i<n;i++){
        cin>>c;
        if(c=='B'){
            r[i]=1;
        }else {
            r[i]=0;
        }
    }


    int group=0;
    for(int i=0;i<n;i++){
        if(r[i]==1){
                group++;
                for(int j=i;j<n;j++){
                    if(r[j]==0){
                        break;
                    }
                    i++;
                }
        }

    }



    cout<<group<<endl;
    if(group==0){
        return 0;
    }

    int black =0;

    for(int i=0;i<n;i++){
        if(r[i]==1){
                black =0;
                for(int j=i;j<n;j++){
                    if(r[j]==1){
                        black++;
                    }else{
                        break;
                    }
                    i++;
                }
                cout<<black<<" ";
        }

    }


}
