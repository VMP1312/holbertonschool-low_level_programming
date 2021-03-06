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
void print_dog(struct dog *d);
typedef struct dog dog_t;
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
#endif
