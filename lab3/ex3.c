/* Example: analysis of text */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define MAX 1000 /* The maximum number of characters i$*/

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

  /* convert text into processed text*/
  char textProcessed[i];
  int j = 0;
  int counter = 0;

  for (int i = 0; i < length; i++)
  {
    if (isspace(text[i]) || ispunct(text[i])) {
    } else if (isalpha(text[i])) {
      textProcessed[j] = tolower(text[i]);
      j++;
    } else {
      textProcessed[j] = text[i];
      j++;
    }
    counter = i;
  }
  counter++;

  textProcessed[j] = tolower(text[counter]);
  textProcessed[j + 1] = '\0';

  char reverseProcessed[i];
  j = 0;
  counter = 0;

  for (int i = 0; i < length; i++)
  {
    if (isspace(reverse[i]) || ispunct(reverse[i])) {
    } else if (isalpha(reverse[i])) {
      reverseProcessed[j] = tolower(reverse[i]);
      j++;
    } else {
      reverseProcessed[j] = reverse[i];
      j++;
    }
    counter = i;
  }
  counter++;

  reverseProcessed[j] = tolower(reverse[counter]);
  reverseProcessed[j + 1] = '\0';

  int lengthProcessed = strlen(textProcessed);

  for (int j = 0; j < lengthProcessed - 1; j++)
  {
    if (reverseProcessed[j] != textProcessed[j]) {
      isPali = false;
      break;
    }
  }

  int l = strlen(reverse);
  if (isspace(reverse[l - 1])) {
    reverse[l - 1] = '\0';
  }

  printf("Your input in reverse is:%s\n", reverse);
  if (isPali) {
    printf("Found a palindrome!\n");
  }
}
