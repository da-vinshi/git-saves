#include <libc.h>

void	ft_print_numbers()
{
	int i;
	i = 48;

	while(i < 58)
	{		
		char c = (char) i;
	
		write(1, &c, 1);
		
		i++;
	}
}
