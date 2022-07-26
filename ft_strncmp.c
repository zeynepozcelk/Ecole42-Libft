#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	counter;

	if (n == 0)
		return (0);
	counter = 0;
	while ((counter < (n - 1)) && s1[counter] && s2[counter])
	{
		if (s1[counter] != s2[counter])
			break ;
		counter++;
	}
	return (((unsigned char *)s1)[counter] - ((unsigned char *)s2)[counter]);
}
