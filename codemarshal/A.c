#include<stdio.h>

int main()
{
    int i,j;
    int t;
    scanf("%d",&t);
    for(j=0;j<t;j++){
    int ind = 0;
    int len;
    int N;
    scanf("%d %d",&len,&N);
    int arr1[100], arr2[100], ans;

    for(i = 0; i < len; i++)
    {
        arr1[i] = i; //assign index numbers to an array
    }

    for(i=len-1;i>0;i--)
    {
        arr2[ind++] = arr1[i]; //reversely copy the index numbers into another array
    }
    for(i = 0; i < len; i++)
            {
                if(arr2[i]==N)
            {
                ans = i;
                break;
            }
            }
        printf("Case %d: %d\n",i,ans);
    }
    return 0;
}

