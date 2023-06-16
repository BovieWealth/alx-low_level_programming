#include <stdio.h>
/**
* main - Code that prints the size of datatypes in computer it was compiled
* Return: 0 (Success)
*/
int main(void)
{
int integer;
char character;
long int long_int;
long long int long_long_int;
float float_num;
printf("Size of a char: %d byte(s)\n", sizeof(character));
printf("Size of an int: %d byte(s)\n", sizeof(integer));
printf("Size of a long int: %d byte(s)\n", sizeof(long_int));
printf("Size of a long long int: %d byte(s)\n", sizeof(long_long_int));
printf("Size of a float: %d byte(s)\n", sizeof(float_num));
return (0);
}
