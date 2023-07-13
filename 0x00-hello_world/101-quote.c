#include <unistd.h>
/**
 * main - Entry point
 *
 * retrun 1 (fail)
*/
int main(void)
{
char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"
write(1, quote, 59);
return (1);
}
