#include<iostream>
void palindrome(int x);
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){

    }

    palindrome(986);

    return 0;
}

void palindrome(int x){

    cout<<"Palindrome is \n";
    while(x!=0){
        cout<<x<<endl;
        x=x%10;
    }

}
