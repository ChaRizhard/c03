#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return(s1[i] - s2[i]);
}
/*
int	main()
{
	char	a[100];
	char	b[100];

	strcpy(a, "Ab1");
	strcpy(b, "Ab2");
	printf("First: %i\n", ft_strcmp(a, b));
	printf("Second: %i\n", ft_strcmp(a, b));
	return(0);
}
*/
