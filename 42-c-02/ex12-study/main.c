#include <stdio.h>

void *ft_print_memory(void *addr, unsigned int size);

int main(){
	//int test = 42;

	//printf("%p\n", &ft_print_memory);
	ft_print_memory(&ft_print_memory, 64);
	// ft_print_memory(&test, 64);

	return 0;
}
