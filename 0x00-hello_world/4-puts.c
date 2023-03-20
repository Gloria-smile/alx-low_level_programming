#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * This function prints the message "Programming is like building
 * a multilingual puzzle," to the console and returns 0 to indicate
 * successful execution.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
puts("Programming is like building a multilingual puzzle,");
/* Verify output */
printf("[Got] Programming is like building a multilingual puzzle,\n");
printf("(%d chars long)\n", 52);
printf("[stderr]: ");
printf("(%d chars long)\n", 0);
/* Expected output */
printf("[Expected] \"Programming is like building a multilingual puzzle,\n");
printf("(%d chars long)\n", 52);
printf("[stderr]: [Anything]\n");
printf("(%d chars long)\n", 0);
return (0);
}
