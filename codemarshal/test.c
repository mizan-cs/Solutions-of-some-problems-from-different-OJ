#include<stdio.h>
int main()
{
        int t,i,j,dhap,chaklet,total;


        scanf("%d",&t);
        for(i=1;i<=t;i++){
                scanf("%d",&dhap);
                total=0;
                chaklet =1;
                for(j=0;j<dhap;j++){
                        chaklet=chaklet+6*j;
                        total=total+chaklet;
                }

                printf("Case %d: %d %d\n",i,chaklet,total);
                }



        return 0;
}

