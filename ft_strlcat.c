/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-c <agomez-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 16:05:03 by agomez-c          #+#    #+#             */
/*   Updated: 2022/04/11 18:01:36 by agomez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *s);
*/

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		len_dst;
	size_t		len_src;
	size_t		index_src;
	size_t		index_dst;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	index_src = 0;
	index_dst = len_dst;
	if (len_dst >= dstsize)
		return (dstsize + len_src);
	if (len_dst < dstsize)
	{
		while (src[index_src] != '\0' && index_dst < dstsize -1)
		{
			dst[index_dst] = src[index_src];
			index_src++;
			index_dst++;
		}
	}
	dst[index_dst] = '\0';
	return (len_dst + len_src);
}
/*
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

int	main(void)
{
	char	dst[] = "This is";
	char	src[] = "a potentially long string";
	size_t	dstsize;
	size_t	r;

	dstsize = sizeof(dst);
	//r = strlcat(dst, src, dstsize);
	r = ft_strlcat(dst, src, dstsize);
	printf("Value returned: %zu %lu\n", r, strlcat(dst, src, dstsize));
	if (r > dstsize)
		printf("String truncated");
	else
		printf("String was fully copied");
	return (0);
}
*/
