
int main()
{
	char palabra[] = "holaQue tal";
	char palabra1[] = "hola que tal";
	int x;
	int y;
	unsigned n;

	n = 4;

	y = ft_strncmp(palabra, palabra1, n);
	printf("%i \n", y);
	x = strncmp(palabra, palabra1, n);
	printf("%i \n", x);
}