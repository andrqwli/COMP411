#include <stdio.h>

int main()
{
  double r, sum, min, max, product;
  printf("Enter 10 floating-point numbers:\n");
  for (int i = 0; i < 10; i++)
  {
    scanf("%lf", &r);

    if (i == 0) {
      sum = r;
      min = r;
      max = r;
      product = r;
    } else {
      sum += r;
      if (r < min) {
	min = r;
      }
      if (r > max) {
	max = r;
      }
      product *= r;
    }
  }
  printf("Sum is %.5f\n", sum);
  printf("Min is %.5f\n", min);
  printf("Max is %.5f\n", max);
  printf("Product is %.5f\n", product);
}
