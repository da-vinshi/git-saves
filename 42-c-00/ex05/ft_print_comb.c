#include <libc.h>

void	ft_print_comb(void)
{
	// char o1[1] = "0";
	// char o2[2] = "00";

	// write(1, &o2, sizeof(o2));	
	
	// int a, b, c;
	// a = b = c = '0';

	int a = 0;
	int b = 1;

	char x = '0';
	char y = '1';

	char s[2] = ", ";

	while (a < 10){
		// write(1, &x, 1);
		
		while(b < 10){
			write(1, &x, 1);
			write(1, &y, 1);
			
			b++;
			y++;

			write(1, s, 2);
		}

		write(1, s, 2);

		a++;
		x++;
	}
}
