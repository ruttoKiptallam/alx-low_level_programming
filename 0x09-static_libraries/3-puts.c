#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void _puts(char *str)
{
   char str1[15];
   char str2[15];

   strcpy(str1, "tutorialspoint");
   strcpy(str2, "compileonline");

   puts(str1);
   puts(str2);
   
   return(0);
}
