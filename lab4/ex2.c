/* Example: bubble sort strings in array */

#include <stdio.h>  /* Need for standard I/O functions */
#include <string.h> /* Need for strlen() */


#define NUM 25   /* number of strings */
#define LEN 1000  /* max length of each string */

int main()
{
    char Strings[NUM][LEN];

    printf("Please enter %d strings, one per line:\n", NUM);

  /* Write a for loop here to read NUM strings.
    
     Use fgets(), with LEN as an argument to ensure that an input line that is too
     long does not exceed the bounds imposed by the string's length.  Note that the
     newline and NULL characters will be included in LEN.
  */
    for (int i = 0; i < 25; i++) {
        fgets(Strings[i], LEN, stdin);
    }
    puts("\nHere are the strings in the order you entered:");
  
  /* Write a for loop here to print all the strings. */
    for (int i = 0; i < 25; i++) {
        printf("%s", Strings[i]);
    }
  
  /* Bubble sort */
    for (int i = 0; i < 25; i++) {
        for (int j = 0; j < 25 - i - 1; j++) {
            int pseudobool = strcmp(Strings[j], Strings[j + 1]);
            if (pseudobool > 0) {
                char tempstring[LEN];
                strcpy(tempstring, Strings[j]);
                strcpy(Strings[j], Strings[j + 1]);
                strcpy(Strings[j + 1], tempstring);
            }
        }
    }
  /* Write code here to bubble sort the strings in ascending alphabetical order

     Use the function my_compare_strings() to compare two strings.  If they are out of order,
     use the function my_swap_strings() to swap their contents.

  */

  
  
  /* Output sorted list */
  
    puts("\nIn alphabetical order, the strings are:");     
  /* Write a for loop here to print all the strings. Feel free to use puts/printf
     etc. for printing each string.*/
    for (int i = 0; i < 25; i++) {
        printf("%s", Strings[i]);
    }


}
