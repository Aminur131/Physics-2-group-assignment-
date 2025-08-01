#include<stdio.h>
#include<math.h>
int main()
{
   double ratio;
   double angle=45;
   double pi = 3.1416;

   ratio = 1/sin(angle*pi/180);

   printf("The Ratio (a/lamda) is :%.2f\n",ratio);

   getchar();



}
