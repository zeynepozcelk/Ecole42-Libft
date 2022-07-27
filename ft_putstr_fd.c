#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s == NULL)
		return ;
	while (*s)
		write(fd, s++, 1);
}

/*
#include<fcntl.h>
int main()
{
	int a = open("deveme.txt",O_WRONLY|O_CREAT);
	ft_putstr_fd("zeynep",a);
	close(a);

}*/