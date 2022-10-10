#ifdef DOG_H
#define DOG_H

int main(void);
/**
 * struct dog - dog information
 * @name: member one
 * @age: member two
 * @owner: member three
 *
 * Description: long.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog_t;

void int dog(struct dog *d, char *name, float age, chsr *owner);
void print_dog(struct dog*d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int *_strlen(char *s);

#endif
