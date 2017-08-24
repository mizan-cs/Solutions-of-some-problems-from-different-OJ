#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <time.h>
#include<dos.h>

void delay(unsigned int mseconds){
        clock_t goal=mseconds+clock();

        while(goal>clock());
}

int main ()
{
  time_t rawtime;
  struct tm * timeinfo;


  while(1){
                time ( &rawtime );
                timeinfo = localtime ( &rawtime );
                delay(1000);
                //system("cls");
             //   printf("--------------------------CLOCK--------------------------\n");
                printf ( "%s", asctime (timeinfo) );
  }


  return 0;
}
