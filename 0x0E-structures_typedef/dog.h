#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dogs infos function
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
#endif
