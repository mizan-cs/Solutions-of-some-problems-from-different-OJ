#include <stdio.h>

using namespace std;
int main ()
{
  char buffer[100];
  int n;
  scanf("%d",&n);
  sprintf (buffer, "%d",n);
  printf ("%s",buffer);
  return 0;

}
