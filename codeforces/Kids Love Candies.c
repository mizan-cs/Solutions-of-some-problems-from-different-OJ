#include<stdio.h>
int main()
{
    int t,n,m,ans=0,cs,i;;
    int a[200];

    scanf("%d",&t);
    for(cs=1;cs<=t;cs++){
        ans=0;
        scanf("%d %d",&n,&m);
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
            ans = ans+a[i]/m;
        }
    printf("%d\n",ans);
    }
}
