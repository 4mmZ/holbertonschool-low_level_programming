#ifndef dog_h
#define dog_h
#include <stdio.h>

/**
 *struct dog - dog name
 *@name: name of my dog
 *@age: age of my dog
 *@owner: first owner of my dog
 *
 * Description: print my dogs name and their age and if the dogs have is owner
 */


struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
