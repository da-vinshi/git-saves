#include <libc.h>

void w(char a, char b, char c){
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void ft_print_comb(void){
	char x = '0';
	char y = '1'; 
	char z = '2';

	char sp[2] = ", ";
	char ln = '\n';

	while (x <= '7'){
		
		y = x + 1;
		while(y <= '8'){
		
			z = y + 1; 
			while(z <= '9'){
				w(x, y, z);		
				
				if (x != '7' || y != '8' || z != '9')
					write(1, sp, 2);
				else 
					write(1, &ln, 1);

				z++;
			}
			y++;
		}
		x++;
	}
}	
