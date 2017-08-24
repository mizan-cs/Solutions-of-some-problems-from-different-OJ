#include<stdio.h>

int main()
{
    int t;
    float p,m,zero;
    scanf("%d",&t);

    int arr[t],i;
    for(i=0;i<t;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>0){
            p++;
        }
        else if(arr[i]<0){
            m++;
        }
        else{
            zero++;
        }
    }

    printf("%f\n%f\n%f",p/t,m/t,zero/t);

    return 0;
}

