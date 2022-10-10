#ifndef STRTYP
#define STRTYP

/**
  *struct dog - struct that stores some information of a dog
  *
  *@name: name of the dog
  *@age: age of the dog
  *@owner: owner of the dog
  *
  * Description: struct called "dog" that stores its name, its age and its owner
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
