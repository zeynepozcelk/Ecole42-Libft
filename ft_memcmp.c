/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeser <aeser@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 16:55:22 by aeser             #+#    #+#             */
/*   Updated: 2022/02/01 11:15:35 by aeser            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	int		dif;

	if (n == 0)
		return (0);
	i = 0;
	while (i < (n))
	{
		dif = ((unsigned char *)s1)[i] - ((unsigned char *)s2)[i];
		if (dif != 0)
			return (dif);
		i++;
	}
	return (0);
}