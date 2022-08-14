#include <unistd.h>
#include <string.h>


int main()
{
	char src[] = "mi nombre es Gabriel";
	char dest[100] = "Buenos dias, ";
	char src1[] = "mi nombre es Gabriel";
	char dest1[100] = "Buenos dias, ";
	int i;

	ft_strcat(dest, src);
	i = 0;
	while (dest[i] != '\0')
	{
		write(1, &dest[i], 1);
		i++;
	}
	write(1, "\n", 1);
	strcat(dest1, src1);
	i = 0;
	while (dest1[i] != '\0')
	{
		write(1, &dest1[i], 1);
		i++;
	}
	write(1, "\n", 1);
}