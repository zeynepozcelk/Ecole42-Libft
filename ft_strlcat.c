/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeser <aeser@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 16:54:49 by aeser             #+#    #+#             */
/*   Updated: 2022/02/01 14:38:15 by aeser            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t	dst_size;
	size_t	src_size;
	size_t	i;

	dst_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	i = dst_size;
	if (dstsize <= ft_strlen(dst))
		return (dstsize + src_size);
	if (dstsize)
	{
		while (*src && i < (dstsize - 1))
		{
			dst[i] = *src;
			i++;
			src++;
		}
		dst[i] = '\0';
	}
	return (dst_size + src_size);
}
/*
int main()
{
	char arr[15]="Furkan";
	char *arr2="yardimci";

	
	printf("%ld",ft_strlcat(arr,arr2,15));
}
*/