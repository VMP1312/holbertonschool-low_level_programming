#ifndef DOG
#define DOG
/**
 *struct dog -Structure of dog
 *@name: name
 *@age: age
 *@owner: name of the owner
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};


void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
