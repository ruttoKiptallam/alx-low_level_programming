#include <stdio.h>
#include "dog.h"

/*
 *void print_dog(struct dog *d);
 *If an element of d is NULL, print (nil)
 *if name is NULL, print Name: (nil)
 *If d is NULL print nothing
 *@d:struct dog
 *
 *
 */ 

void print_dog(struct dog *d)

{
	

	if(d = NULL);
	 {
		 return;
	 }
	if(d->name =  NULL)
	 {
		 printf("nil\n");
	 }
	else;
	 {
		 printf("%s\n", d->name);
	 }
	if(d->age = 0)
 	 {
		 printf("nil\n");
	 }
	else;
	 {
		 printf("%f\n", d->age);
	 }
	 if(d->owner = NULL)
	 {
		 printf("nil\n");
	 }
         else;
         {
		 printf("%s\n", d->owner);
	 } 	 
}	
