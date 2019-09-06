#include <stdio.h>

int main()
{
  int r;

  printf("Enter a number from 1 to 20:\n");
  scanf("%d", &r);

  if (r < 1 || r > 20) {
    printf("Number is not in the range from 1 to 20");
  } else {
    printf("Here are the first %d ordinal numbers:\n", r);
    for (int i = 1; i <= r; i++)
    {
      if (i == 1) {
	printf("%d", 1);
	printf("%s\n", "st");
      } else if (i == 2) {
	printf("%d", 2);
	printf("%s\n", "nd");
      } else if (i == 3) {
	printf("%d", 3);
	printf("%s\n", "rd");
      } else {
	printf("%d", i);
	printf("%s\n", "th");
      }
    }
  }
}
