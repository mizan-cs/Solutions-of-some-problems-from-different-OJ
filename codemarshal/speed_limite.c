#include<stdio.h>

int main()
{
        int t,x,n,m[100],i,safe,unsafe,j;

        scanf("%d",&t);
        j=0;
        while(j<t){
                safe=0;unsafe=0;
                scanf("%d %d",&x,&n);

                for(i=0;i<n;i++){
                        scanf("%d",&m[i]);
                }
                for(i=0;i<n;i++){
                        if(m[i]<=x){
                                safe++;
                        }
                        else{
                                unsafe++;
                        }
                }
                printf("Case %d: \n%d vehicles are safe.\n%d vehicles aren't safe.\n",j+1,safe,unsafe);
                j++;
        }

        return 0;
}
