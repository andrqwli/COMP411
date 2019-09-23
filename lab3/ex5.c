#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_BUF 1024

int main () {

  char buf[MAX_BUF];
  int length;
  // other stuff

  do {
        // read a line
        // calculate its length
        // modify the line by switching characters
        // print the modified line
    fgets(buf, MAX_BUF, stdin);
    length = strlen(buf) - 1;
    for (int i = 0; i < length; i++)
    {
      if (tolower(buf[i]) == 'e' ) {
        buf[i] = '3';
      } else if (tolower(buf[i]) == 's') {
        buf[i] = '5';
      } else if (tolower(buf[i]) == 'i') {
        buf[i] = '1';
      } else if (tolower(buf[i]) == 'o') {
        buf[i] = '0';
      }
    }
    buf[length] = '\0';
    printf("%s", buf);
    if (length > 1) {
      printf("\n");
    }




  } while (length > 1);

}

