#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combo2(void)
{
	int	i
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_putchar('0' + (i / 10));
			ft_putchar('0' + (i % 10));
			ft_putchar(' ');
			ft_putchar('0' + (j / 10));
			ft_putchar('0' + (j % 10));
			if (i != 98 || j != 99)
			{
				write (1, ", ", 2);
			}
			j++;
		}
		i++;
	}
}
