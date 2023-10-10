#ifndef MY_HEADER_H
#define MY_HEADER_H

/**
 * struct dog - dfines new data type dog
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 */
typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
