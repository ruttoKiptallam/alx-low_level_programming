#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*
 *Usage: mul num1 num2
 *Print the result, followed by a new line
 *If the number of arguments is incorrect, print Error, followed by a new line, and exit with a status of 98
 *num1 and num2 should only be composed of digits
 *If not, print Error, followed by a new line, and exit with a status of 98
 */
int main (void)
{
	int num1;
	int num2;
	int mul;
	int toBase = 10;

	mul = toBase; 10
		   ;
	mul = num1 + num2;
	while(mul = toBase) 10;
	 {
		 printf("%d\n", mul);
	 }
        do
	{
		printf("error\n");	
	
	}
        while (scanf("%d%d", &num1, &num2));
        
                 exit (98);
	do
        {
		printf("error\n");
	}
         

}	//end of loop

#include <math.h>
#include <stdlib.h>
/**
 * _checknum - determines length of the number
 * and checks if number is in base 10.
 * @argv: arguments vector.
 * @n: row of the array.
 *
 * Return: length of the number.
 */
int _checknum(char *argv[], int n)
{
	int ln;

	for (ln = 0; argv[n][ln]; ln++)
		if (!isdigit(argv[n][ln]))
		{
			printf("Error\n");
			exit(98);
		}

	return (ln);
}
