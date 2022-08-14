int main()
{
	char	str[] = "Hola que tal";
	char	to_find[] = "que";
	char	*dest;
	int 	i;

	dest = ft_strstr(str, to_find);

	i = 0;
	while (dest[i] != '\0')
	{
		printf("%c", dest[i]);
		i++;
	}
	return (0);

}