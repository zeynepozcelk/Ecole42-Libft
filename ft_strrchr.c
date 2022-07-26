#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*start;

	start = (char *)s;
	while (*s)
		s++;
	while (s >= start)
	{
		if (*((char *)s) == (char)c)
			return ((char *)s);
		s--;
	}
	return (NULL);
}
