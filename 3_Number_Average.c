//Write a prgram to find average of 3 numbers

#include<stdio.h>

int avg,n1,n2,n3;

int main ()
{
  printf ("Enter any number\n");
  scanf ("%d%d%d",&n1,&n2,&n3);
  avg=(n1+n2+n3)/3;
  printf ("Average of entered 3 numbers is %d \n",avg);
}
