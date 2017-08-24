#include<stdio.h>
main()
{
        int t,n,x[100],j,max=0,i;
        char qes;
        scanf("%d",&t);
        while(t--)
        {
                j=0;
                scanf("%d",&n);
                for(i=0;i<n;i++)
                {
                        scanf("%c",&qes);
                        if(qes=='A')
                        {
                                scanf("%d",&x[j]);
                                if(x[j]>max)
                                        max=x[j];
                                j++;

                        }
                        else if (qes=='Q')
                        {
                                printf("%d",max);
                        }
                        else if(qes=='R')
                        {
                                j--;
                        }
                }
        }
}
