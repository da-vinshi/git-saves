#include <unistd.h>
#include <stdio.h>

void ptc(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ptc('-');
		ptc('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ptc('-');
		nb *= -1;
	}
	if (nb < 10)
	{
		ptc(nb + 48);
		return;
	}
	else
		ft_putnbr(nb / 10);
	ft_putnbr(nb % 10);

	printf("[%d]", nb);
}
