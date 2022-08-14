int	main()
{
	char src[] = "mi nombre es Gabriel";
	char dest[] = "Hola buenos dias, ";
	char src1[] = "mi nombre es Gabriel";
	char dest1[] = "Hola buenos dias, ";
	unsigned int nb;
	int i;

	nb = 25;
	ft_strncat(dest, src, nb);
	
	i = 0;
	while (dest[i] != '\0')
	{
		printf("%c", dest[i]);
		i++;
	}
	printf("\n");

	strncat(dest1, src1, nb);
	i = 0;
	while (dest1[i] != '\0')
	{
		printf("%c", dest1[i]);
		i++;
	}
}