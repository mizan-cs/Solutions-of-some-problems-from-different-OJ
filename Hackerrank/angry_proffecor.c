#include<stdio.h>
int main()
{
        int t,time[1000],student,th,i,bad=0;

        scanf("%d",&t);

        while(t--){
                scanf("%d %d",&student,&th);

                for(i=0;i<student;i++){
                        scanf("%d",&time[i]);
                        if(time[i]<=0){
                                bad++;
                        }
                }
                if(th>=bad){
                        printf("YES\n");
                }
                else{
                        printf("NO\n");
                }

        }

        return 0;
}
