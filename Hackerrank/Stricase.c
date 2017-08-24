#include<stdio.h>
int main()
{
    int i,j,k,t;
    scanf("%d",&t);

    for(i=t;i>=1;i--){
        for(j=1;j<i;j++){
            printf(" ");
        }
        for(k=t;k>=i;k--){
            printf("#");
        }
        printf("\n");
    }

    return 0;
}
