#include<stdio.h>
int main()
{
    int t,limite,v,cs,i,j,safe,usafe;
    int speeds[200];

    scanf("%d",&t);
    for(cs=1;cs<=t;cs++){
        safe =0;
        usafe =0;
        scanf("%d %d",&limite,&v);
        for(i=0;i<v;i++){
            scanf("%d",&speeds[i]);
            if(speeds[i]>limite){
                usafe++;
            }else{
                safe++;
            }
        }

        printf("Case %d:\n%d Vehicles is safe\n%d Vehicles is unsafe\n",cs,safe,usafe);

    }
}
