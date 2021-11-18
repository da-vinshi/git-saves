#include <stdio.h>
#include <unistd.h>
#include <string.h>

void ptc(char *c)
{
	write(1, c, strlen(c));
}

void getHex()
{
}

void *ft_print_memory(void *addr, unsigned int size)
{
	
	unsigned int row_size = 16;

	int i = -1;

	while (i++ < (int) (size / row_size))
	{
		printf("i: %d\n", i);
	}
}

int main()
{
	int a = 5;

	ft_print_memory(&a, 64);

	return 0;
}
