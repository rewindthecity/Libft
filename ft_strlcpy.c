/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-c <agomez-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 16:21:43 by agomez-c          #+#    #+#             */
/*   Updated: 2022/04/07 15:57:41 by agomez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *s);

int	main(void)
{
	char	src[] = "hola varys";
	char	dst[] = "egunon";
	size_t	dstsize;

	dstsize = sizeof(dst);
	printf("Antes de strlcpy dst es %s y src es %s\n", dst, src);
	//strlcpy(dst, src, dstsize);
	ft_strlcpy(dst, src, dstsize);
	printf("Después de strlcpy dst es %s y src es %s\n", dst, src);
}
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	it;
	size_t	count;

	it = 0;
	count = ft_strlen(src);
	if (dstsize > 0)
	{
		while (src[it] != '\0' && it < (dstsize - 1))
		{
			dst[it] = src[it];
			it++;
		}
		dst[it] = '\0';
	}
	return (count);
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
*/
