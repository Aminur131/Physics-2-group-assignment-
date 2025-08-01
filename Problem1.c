#include<stdio.h>
#include<math.h>
int main()
{
   double lamda,d,theta;
   double theta_rad,m;

   printf("Enter Wavelength (nanometer):");
   scanf("%lf",&lamda);

   printf("Enter Slit distance d(micrometer):");
   scanf("%lf",&d);

    printf("Enter Angle theta (degree):");
    scanf("%lf",&theta);

    theta_rad = theta*3.1416/180;

    m=(d*0.000001*sin(theta*3.1416/180))/(lamda*0.000000001);

    printf("Order of maxima = %.2lf\n",m);

    getchar();
}



