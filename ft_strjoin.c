#include "libft.h"

static char	*ft_strcpy(char *dst, const char *src)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	while (*src)
		dst[i++] = *((char *)src++);
	dst[i] = '\0';
	return (dst);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	int		ret_len;

	if (!s1 || !s2)
		return (NULL);
	ret_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	ret = malloc(sizeof(char) * (ret_len));
	if (!ret)
		return (NULL);
	ft_strcpy(ret, s1);
	ft_strlcat(ret, (char *)s2, ret_len);
	return (ret);
}
