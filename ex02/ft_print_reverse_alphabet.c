#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	rev;

	rev = 'z';
	while (rev >= 'a')
	{
		write(1, &rev, 1);
		rev--;
	}
}
