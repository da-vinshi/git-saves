#include <unistd.h>

void print2(char a, char b)
{
	write(1, &a, 1);
	write(1, &b, 1);
}

void ft_putint(int num, int max)
{
	char uni;
	char dec;

	if (num <= 9)
	{
		uni = num + 48;
		print2('0', uni);
	}
	else if (num <= max)
	{
		uni = (num % 10) + 48;
		dec = (num / 10) + 48;
		print2(dec, uni);
	}
}

void ft_catint(int first, int second)
{
	ft_putint(first, 98);
	write(1, " ", 1);
	ft_putint(second, 99);
	if (first != 98 || second != 99)
		print2(',', ' ');
}

void ft_print_comb2(void)
{
	int f;
	int s;

	f = 0;
	while (f <= 98)
	{
		s = f + 1;
		while (s <= 99)
		{
			ft_catint(f, s);
			s++;
		}
		f++;
	}
}

