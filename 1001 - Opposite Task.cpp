#include<iostream>
using namespace std;

int main(){

		int index[25];
			for (int i = 0; i < 25; i++) {
				index[i]=0;
			}

		int t;
		cin>>t;
		int p=0;
		while(t--) {

            int n;
            cin>>n;

            int found=0;
            for (int j = 0; j < 25; j++) {
                if(index[j]==n){
                    found++;
                }
            }
            int computer1=0;
            int computer2=0;
            if(found>0){
                computer1=found;
                computer2=n-found;
                if(computer1>10||computer2>10){
                    computer1=n-10+found;
                    computer2=n-computer1;
                }
            }else {
                computer1=0;
                computer2=n;
                if(computer1>10||computer2>10){
                    computer1=n-10;
                    computer2=n-computer1;
                }
            }
            cout<<computer1<<" "<<computer2<<endl;
            index[p]=n;
            p++;
		}



    return 0;
}
