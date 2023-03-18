#include <unistd.h>
/**
 *main -print a c program without printf and puts
 *Return: 1
*/

int main(void)
{
	char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(STDERR_FILENO, msg, 42);
	return (1);
}
