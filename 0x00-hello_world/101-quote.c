#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *discription: printing output without using printf or puts
 * Return: Always 1 (Success)
 */
int main(void)
{
char *buffer = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(1, buffer, 59);
return (1);
}
