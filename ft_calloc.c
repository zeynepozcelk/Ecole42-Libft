#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ret;

	ret = malloc(nmemb * size);
	if (ret)
		ft_bzero(ret, nmemb * size);
	return (ret);
}
/*
int main()
{
	char *a;

	a=ft_calloc(5,sizeof(char));

	printf("%d",a[0]);	
}
*/