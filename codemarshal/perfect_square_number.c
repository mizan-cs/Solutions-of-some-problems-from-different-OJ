#include<stdio.h>
#include<math.h>

int main()
{
    int i,t,l,r,psn;

    scanf("%d",&t);

    while(t--)
    {
        psn=0;
        scanf("%d %d",&l,&r);
        if(l<=r)
        {
            for(i=l; i<=r; i++)
            {
                if(i==(int)sqrt(i)*(int)sqrt(i))
                    psn++;
            }
            printf("%d\n",psn);
        }
    }
    return 0;
}
