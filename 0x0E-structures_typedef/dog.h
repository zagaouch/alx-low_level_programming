#ifndef DOG_FILE
#define DOG_FILE

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - a new type
 * @name: name
 * @age: the dog age
 * @owner: name of dog owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif
