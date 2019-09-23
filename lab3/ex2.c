

/* Example: analysis of text */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX 1000 /* The maximum number of characters in a line of inpu$ */

int main()
{
  char text[MAX], c;
  int i;
  int length;
  bool isPali;

  puts("Type some text (then ENTER):");

  /* Save typed characters in text[]: */

  isPali = true;
  fgets(text, MAX, stdin);
  i = strlen(text);
  length = i - 1;
  char reverse[i];
  reverse[i] = '\0';

  /* Analyse contents of text[]: */

  for (int i = 0; i <= length; i++)
  {
    reverse[i] = text[length - i];
  }

  for (int j = 0; j < length; j++)
  {
    if (reverse[j + 1] != text[j]) {
      isPali = false;
      break;
    }
  }

  printf("Your input in reverse is:%s\n", reverse);
  if (isPali) {
    printf("Found a palindrome!\n");
  }
}

