#include <unistd.h>

/**
 * main - write to stdout
 * Return: 1 (Abnormal Execution)
 */
int main(void)
{
write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
