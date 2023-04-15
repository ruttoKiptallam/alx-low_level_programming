#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char *_memset(char *s, char b, unsigned int n)
            char str[50];
{
<<<<<<< HEAD
   strcpy(str,"This is string.h library function");
   puts(str);

   memset(str,'$',7);
   puts(str);
   
   return(0);
=======
  char *s;
  char b;
  int n;
  for (unsigned int i = 0; i < n; i++) {
    s[i] = b;
  }
  return s;
>>>>>>> 8fecd8fdaf2b5a9daba9b0862d7e3bffb823c02a
}
