#include <stdio.h>
#include <stdbool.h>

int main()
{
  int w, h;
  while (true)
  {
    printf("\nPlease enter width and height:\n");
    scanf("%d", &w);
    if (w == 0) {
      printf("End\n");
      break;
    }
    scanf("%d", &h);
    for (int i = 0; i < h; i++)
    {
      /* account for the first/last lines  of the box
	 that look like +---+ */
      if (i == 0 || i == h - 1) {
	for (int j = 0; j < w; j++)
	{
	  if (j == w - 1) {
	    printf("+\n");
	  } else if (j < w - 1 && j != 0) {
	    printf("-");
	  } else {
	    printf("+");
	  }
	}
      } else {
      /* account for middle lines that look like
	 |~~~~|  */
	for (int k = 0; k < w; k++)
	{
	  if (k == w - 1) {
	    printf("|\n");
	  } else if (k < w - 1 && k != 0) {
	    printf("~");
	  } else {
	    printf("|");
	  }
	}
      }
    }
  }
}



