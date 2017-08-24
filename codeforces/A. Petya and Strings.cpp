#include<iostream>
#include<string.h>
#include<string>

using namespace std;

int main()
{
    string str1,str2;
    cin>>str1;
    cin>>str2;
    for(int i=0;i<str1.size();i++){
            str1[i]=tolower(str1[i]);
            str2[i]=tolower(str2[i]);
        }

    for(int i=0;i<str1.size();i++){
        if(str1[i]!=str2[i]){

            if(str1[i]>str2[i]){
                cout<<"1"<<endl;
                return 0;
            }else{
                cout<<"-1"<<endl;
                return 0;
            }
        }
    }
    cout<<"0"<<endl;



    return 0;

}
