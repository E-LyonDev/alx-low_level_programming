#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A dog's basic info
 * @name: name of dog
 * @age: Age of dog
 * @owner: Onwer of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void int_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *onwer);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
