#include<stdio.h>
int main()
{
        int t,city,train,i,m;

        scanf("%d",&t);
        if(t>=1 && t<=30){
        for(m=0;m<t;m++){
                       train=0;
                scanf("%d",&city);
                if(city>=1&&city<=1000000){
                for(i=1;i<city;i++){
                        train=train+i;
                }
                printf("%d\n",train);
        }
        }
        }

        return 0;
}
