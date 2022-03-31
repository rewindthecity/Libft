/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-c <agomez-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 14:50:25 by agomez-c          #+#    #+#             */
/*   Updated: 2022/03/31 17:13:30 by agomez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <string.h>
#include <stdio.h>
*/

/*void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*ptr;
	const unsigned char	*ptr2;
	size_t				i;

	if (!dst)
		return (NULL);
	ptr = dst;
	ptr2 = src;
	i = 0;
	while (i < n)
	{
		ptr[i] = ptr2[i];
		i++;
	}
	return (dst);
}
*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;

	if (!dst && !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((const char *)src)[i];
		i++;
	}
	return (dst);
}

/*
int	main(void)
{
	const char	src[10] = "hola";
	char		dst[10];
	size_t		n;

	n = 3;
	printf("Before memcpy dest = %s\n", dst);
	//memcpy(dst, src, strlen(src)+1);
	ft_memcpy(dst, src, strlen(src) + 1);
	printf("After memcpy dest = %s\n", dst);
}
*/
