#include <stdio.h>

int	main(void)
{
	int	*tab;
	int	x[] = {2, 4, 6, 8, 0};

	tab = x;
	ft_rev_int_tab(tab, 4);

	int size = 4;
	int i = 0;
	while (i < size)
	{
		printf("%d", x[i]);
	i++;	
	}
	
	return (0);
}