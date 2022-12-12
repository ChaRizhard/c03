#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	unsigned int	k;

	i = 0;
	k = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[k] != '\0' && k < nb)
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main()
{
	char	x[] = "abc";
	char	y[] = "def";

	printf("%s\n", ft_strncat(x, y, 1));
	return(0);
}
*/
