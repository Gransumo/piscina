#include <stdio.h>

int ft_iterative_factorial(int nb)
{
	int num;

	num = 1;
	if (nb < 0)
		num = 0;
	while (nb > 0)
	{
		num *= nb;
		nb--;
	}
	return (num);
}

int main()
{
	int num;

	num = 5;
	printf("%i", ft_iterative_factorial(num));
	return (0);

}