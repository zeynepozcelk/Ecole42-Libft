#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	while (n-- > 0)
	{
		*((unsigned char *)s) = 0;
		s++;
	}
}

/*
int main ()
{
	int a=264;

	ft_bzero(&a,1);
	printf("%d",a);
} */