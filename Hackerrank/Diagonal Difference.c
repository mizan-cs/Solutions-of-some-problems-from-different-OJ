#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int matrix[n][n],sum1=0,sum2=0,i,j;

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&matrix[i][j]);
        }

    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j){
                 sum1=sum1+matrix[i][j];
            }
        }
    }
    for(i=n-1,j=0;i>=0;i--){

            sum2=sum2+matrix[i][j];
            j++;
    }

    if(sum1-sum2>=0){
        printf("%d",sum1-sum2);
    }
    else{
        printf("%d",sum2-sum1);
    }

    return 0;
}
