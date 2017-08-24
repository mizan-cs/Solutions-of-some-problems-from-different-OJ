#include<iostream>
#include<string>
#include<string.h>

using namespace std;


bool isVowel(char c);

int main()
{
    string str;
    cin>>str;

    for(int i=0;i<str.size();i++){
        str[i]=tolower(str[i]);
        if(!isVowel(str[i])){

            cout<<"."<<str[i];
        }
    }
    cout<<endl;


    return 0;

}
bool isVowel(char c)
{
    char v[] = {'a', 'e', 'i', 'o', 'u','y'};
    for(int i=0;i<6;i++){
        if(c==v[i]){
            return true;
        }
    }
    return false;
}
