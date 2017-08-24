#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;

    char in_par_str[225];
    char out_par_str[225];
    int m=0;
    for(int i=0; i<n; i++)
    {
        if(str[i]=='('){
            i++;
            while(str[i]!=')'){
                if(str[i]!='_'){
                    cout<<str[i];
                    out_par_str[m]=str[i];
                    m++;
                    i++;
                }else{
                    cout<<" ";
                    out_par_str[m]="_";
                    m++;
                    i++;
                }
            }
        cout<<" ";
           }
    }

}
