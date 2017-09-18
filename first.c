#include <stdio.h>
#include <string.h>



 





int main()

{
const float DENSITY=62.4;
float weight, volume;
int size, letters;
char *name; // name is an array of 40 chars
name=malloc(256);
printf("Hi! What's your first name?\n");
scanf("%s", name);
printf("%s, what's your weight in pounds?\n", name);
scanf("%f", &weight);
size = sizeof name;
letters = strlen(name);
volume = weight / DENSITY;
printf("Well, %s, your volume is %2.2f cubic feet.\n",
name, volume);
printf("Also, your first name has %d letters,\n",
letters);
printf("and we have %d bytes to store it.\n", size);
free(name);//dynamically allocated memory is not released automatically, it must be freed




return 0;
}