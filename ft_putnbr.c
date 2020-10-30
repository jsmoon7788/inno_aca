#include <unistd.h>

void	ft_rec(int nbr, char *base, int nbase)
{
	char c;

	if (nb > -nbase && nb < nbase)
	{
		if (nb < 0)
			c = base[- nb % nbase];
		else
			c = base[nb % nbase];
		write(1, &c, 1);
		return ;
	}
	ft_rec(nb / nbase);
	if (nb < 0)
		c = base[- nb % nbase];
	else
		c = base[nb % nbase];
	write(1, &c, 1);
}
	
void		ft_putnbr(int nb)
{
	if (nb < 0)
		write(1, "-", 1);
	ft_rec(nb);
	write(1, "\n", 1);
}

int		main(void)
{
	ft_putnbr(8, "eo", 2);
}
