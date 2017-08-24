#include<stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
int c = 0, mini, maxi, i, com1, com2, *t;
scanf ("%d",&c);
t = malloc (c * sizeof(int));
for (i=0; i<c; i++)
    scanf ("%d", &t[i]);
printf("\n");

for (i=0; i<c; i++) {
    if (t[i]>10) {
        maxi = 10;
        mini = t[i] - 10;
    } else {
        maxi = t[i];
        mini = 0;
    }
    com1 = rand() % (maxi - mini + 1) + mini;
    com2 = t[i] - com1;
    printf("%d %d\n",com1,com2);
    }
free (t);
return 0;
}
