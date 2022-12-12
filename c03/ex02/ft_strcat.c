#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[k] != '\0')
	{
		dest[i + k] = src[k];
		k++;
	}
	dest[i + k] = '\0';
	return (dest);
}
/*
int	main()
{
	char	x[] = "abc";
	char	y[] = "def";

	printf("%s\n", ft_strcat(x, y));
	return(0);
}
*/
