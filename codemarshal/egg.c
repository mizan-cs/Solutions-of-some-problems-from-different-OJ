#include<stdio.h>

int main()
{
        int i,p,e,t,test,time;

        scanf("%d",&test);
        for(i=0;i<test;i++){
                time=0;
                scanf("%d %d %d",&p,&e,&t);
                time=e*t;
                if(time<=0){
                        printf("Impossible\n");
                }
                else{
                        printf("%d Seconds\n",time);
                }
        }

        return 0;


        return 0;
}

