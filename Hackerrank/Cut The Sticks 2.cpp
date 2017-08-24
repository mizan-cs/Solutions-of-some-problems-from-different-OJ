
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int cheak_one(int arr[10000], int siz);

//int cheak_element(int arr[10000], int siz);


int main()
{
    int n;
    cin >> n;
    int total;
    total=n;
    int stick_lanth[1000];

    for(int i=0;i<n;i++){
                cin>>stick_lanth[i];
    }



        while(n>0){
                 int zero=0;
                //cout<<n<<endl;
                int temp;
        for(int i=0;i<total-1;i++){
                for(int j=0;j<total-i-1;j++){
                        if(stick_lanth[j]<stick_lanth[j+1]){
                                temp=stick_lanth[j];
                                stick_lanth[j]=stick_lanth[j+1];
                                stick_lanth[j+1]=temp;
                        }
                }
        }

        int one;
        one=cheak_one(stick_lanth,total);

        if(one>0){
                for(int i=0;i<total;i++){
                        stick_lanth[i]=stick_lanth[i]-1;
                }
        }
        else{
                for(int i=0;i<total;i++){
                        stick_lanth[i]=stick_lanth[i]-2;
                }
        }

        int good=0,bad=0;

        for(int i=0;i<total;i++){
                if(stick_lanth[i]!=0){
                        good++;
                }
                else{
                        bad++;
                }
        }

        cout<<good<<endl;

        n=n-bad;
        }
    return 0;
}

int cheak_one(int arr[1000], int siz)
{
        int one=0;
        int two=0;
        for(int i=0;i<siz;i++){
                if(arr[i]<2){
                        one++;
                }
        }

        return one;
}

