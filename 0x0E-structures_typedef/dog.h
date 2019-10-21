#ifndef DOG_H
#define DOG_H

/**
* struct dog - New struct.
* @name: The name of the dog.
* @age: Dog's age.
* @owner: The dog's owner
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog;
/**
* struct dog_t - New struct.
* @name: The name of the dog.
* @age: Dog's age.
* @owner: The dog owner.
*/
typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

