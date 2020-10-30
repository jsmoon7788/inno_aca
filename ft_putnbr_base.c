#include <unistd.h>

void	ft_rec(int nbr, char *base, int nbase)
{
	char c;

	if (nbr > -nbase && nbr < nbase)
	{
		if (nbr < 0)
			c = base[- nbr % nbase];
		else
			c = base[nbr % nbase];
		write(1, &c, 1);
		return ;
	}
	ft_rec(nbr / nbase, base, nbase);
	if (nbr < 0)
		c = base[- nbr % nbase];
	else
		c = base[nbr % nbase];
	write(1, &c, 1);
}
	
void		ft_putnbr_base(int nbr, char *base, int nbase)
{
	if (nbr < 0)
		write(1, "-", 1);
	ft_rec(nbr, base, nbase);
	write(1, "\n", 1);
}

int		main(void)
{
	ft_putnbr_base(-12, "0123456789abcdef", 16);
}
