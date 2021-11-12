#include <unistd.h>

void	ft_print_reverse_alphabet()
{
	int i;
	i = 122;

	while(i > 96)
	{		
		char c = (char) i;
	
		write(1, &c, 1);
		
		i--;
	}
}
