/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeser <aeser@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 16:54:15 by aeser             #+#    #+#             */
/*   Updated: 2022/02/01 11:38:22 by aeser            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	size_s;

	size_s = ft_strlen(s);
	while (size_s >= 0)
	{
		if (((char *)s)[size_s] == (char)c)
			return ((char *)(s + size_s));
		size_s--;
	}
	return (NULL);
}

/*
int main()
{
	char *arr="zeynezpin p";
	printf("%s",ft_strrchr(arr,'z'));
}*/