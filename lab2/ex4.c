#include <stdio.h>

int main()
{
  int r;
  int output[6];
  printf("Enter six integers:\n");
  for (int i = 0; i < 6; i++)
  {
    scanf("%d", &r);
    output[i] = r;
  }
  printf("1234567890bb1234567890\n");
  printf("%10d %11d\n", output[0], output[1]);
  printf("%10d %11d\n", output[2], output[3]);
  printf("%10d %11d\n", output[4], output[5]);
}



