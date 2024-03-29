/*  Example: C program to find area of a circle */

#include <stdio.h>
#define PI 3.14159

int main()
{
 float r, x, a, b;
  x = 1;
  while(x > 0) {
     printf("Enter radius (in cm):\n");
     scanf("%f", &r);

     a = PI * (r / 2.54) * (r / 2.54);
     b = PI * 2 * r / 2.54;

     printf("Circle's area is %3.2f (sq in).\n", a);
     printf("Its circumference is %3.2f (in).\n", b);
     x = r;
  }
}
