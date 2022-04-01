/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-c <agomez-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 16:21:43 by agomez-c          #+#    #+#             */
/*   Updated: 2022/04/01 19:00:40 by agomez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

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

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	it;
	unsigned int	count;

	it = 0;
	count = 0;
	while (src[count] != '\0')
	{
		count++;
	}
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
