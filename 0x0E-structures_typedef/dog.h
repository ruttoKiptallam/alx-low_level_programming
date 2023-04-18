#ifndef STRUCTURES_H
#define STRUCTURES_H
/**
 * new type struct dog
 * @name:char *
 * @age:float
 * @owner:char *
 * description; headfile
 *
 */

struct dog
{
     char *name;
     float age;
     char *owner;    
};
/*dog_t -typedef for struct dog*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
 dog_t *new_dog(char *name, float age, char *owner);
 void free_dog(dog_t *d);

#endif
