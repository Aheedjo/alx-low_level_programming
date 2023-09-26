#include <unistd.h>

int _putchar(char c)
{
ZZ	return write(1, &c, 1);
}
