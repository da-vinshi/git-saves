#include <libc.h>

void	ft_print_alphabet()
{
	int i;
	i = 97;

	while(i < 123)
	{		
		char c = (char) i;
	
		write(1, &c, 1);
		
		i++;
	}
}
