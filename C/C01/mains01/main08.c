#include <stdio.h>

int main(void)
{
	int x [] = {3, 1, 2, 2, 5, 9};
	int *tab;

	tab = x;
	sort_int_main(tab, 6);

	return (0);
}