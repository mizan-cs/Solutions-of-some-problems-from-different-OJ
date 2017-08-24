#include<bits/stdc++.h>

using namespace std;


int main()
{
    int nbit, i=0;

    printf("Bits: ");
    scanf("%d", &nbit);

    char number[nbit+1];
    char rnumber[i++];
    printf("Enter the binary number: ");
    scanf("%s", number);

    for(int k=0; k<nbit; k++) {
        if(number[k]=='1')
            number[k]='0';
        else
            number[k]='1';
    }

    printf("%s\n", number);

    for(int j=nbit-1; j>=0; j--)
        rnumber[i++]=number[j];

    printf("%s\n", rnumber);
    return 0;
}
