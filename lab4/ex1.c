/* Example: bubble sort strings in array */

#include <stdio.h>  /* Need for standard I/O functions */
#include <string.h> /* Need for strlen() */


#define NUM 25   /* number of strings */
#define LEN 1000  /* max length of each string */


int my_compare_strings(char string1[], char string2[]) {

  /* Write code here to compare string1 and string2, character by character.
     WITHOUT USING ANY C STRING LIBRARY FUNCTIONS.

     The max length of the strings is LEN, though they may be shorter so look
     for the string terminators.

     This function should return:
      -1 if string1 comes before string2 in alphabetical order
       0 if string1 is the same as string2
      +1 if string1 comes after string2 in alphabetical order

      Here, alphabetical order is defined simply by the numerical value
      of the characters in the string, from left to right.  See the writeup
      for more details.
  */int length = 0;
    int length1 = strlen(string1);
    int length2 = strlen(string2);
    if (length1 < length2) {
        length = length2;
    } else {
        length = length1;
    }
    for(int i = 0; i < length; i++) {
        if (string1[i] < string2[i]) {
            return -1;
        } else if (string1[i] > string2[i]) {
            return 1;
        }
    }
    if (length1 == length2) {
        return 0;
    } else if (length1 < length2) {
        return -1;
    } else {
        return 1;
    }
}


void my_swap_strings(char string1[], char string2[]) {
    char temp;
  // char variable used in swapping one character at a time
    int length1 = strlen(string1);
    int length2 = strlen(string2);
    int length;
    if (length1 <= length2) {
        length = length1;
    } else {
        length = length2;
    }
    for (int i = 0; i < length; i++) {
        temp = string1[i];
        string1[i] = string2[i];
        string2[i] = temp;
    }
    if (length1 < length2) {
        for (int i = length1; i < length2; i++) {
            temp = string1[i];
            string1[i] = string2[i];
            string2[i] = temp;
        }
    } else if (length2 < length1) {
        for (int i = length2; i < length1; i++) {
            temp = string2[i];
            string2[i] = string1[i];
            string1[i] = temp;
        }
    }

    string1[length2] = '\0';
    string2[length1] = '\0';
  /* Write code here to swap the contents of string1 and string2, one
     character at a time, WITHOUT USING ANY C STRING LIBRARY FUNCTIONS. 

     The max length of the strings is LEN, though they may be shorter, so look
     for the string terminators.
  */
}


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
            int pseudobool = my_compare_strings(Strings[j], Strings[j + 1]);
            if (pseudobool == 1) {
                my_swap_strings(Strings[j], Strings[j + 1]);
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
