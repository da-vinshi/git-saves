#include <libc.h>

void	ft_print_alphabet()
{
	int i;
	i = 0;

	char c = '@';

	while(i < 10)
	{		
		write(1, &c, 1);
		
		i++;
	}
}
