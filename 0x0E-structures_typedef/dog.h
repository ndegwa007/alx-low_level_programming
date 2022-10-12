#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog details
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Description: dog data
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
