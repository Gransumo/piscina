
int	main ()
{
	unsigned int size;
	size = 23 ;

	char src[] = "me llamo ";
	char dest[30] = "Hola buenos";
	int i;
	unsigned int x;

	x = ft_strlcat(dest, src, size);
	printf("%i \n", x);
	i = 0;
	while (dest[i] != '\0')
	{
		printf("%c", dest[i]);
		i++;
	}
	printf("\n");

	char src1[] = "me llamo ";
	char dest1[20] = "Hola buenos";

	x = strlcat(dest1, src1, size);
	printf("%i \n", x);
	i = 0;
	while (dest1[i] != '\0')
	{
		printf("%c", dest1[i]);
		i++;
	}
	printf("\n");
}