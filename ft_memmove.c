/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-c <agomez-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 12:06:35 by agomez-c          #+#    #+#             */
/*   Updated: 2022/04/01 15:50:47 by agomez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len);

int	main(void)
{
	char	dst[] = "oldstring";
	char	src[] = "newstring";

	printf("Antes de memmove dst es %s y src es %s\n", dst, src);
	//memmove(dst, src, 9);
	ft_memmove(dst, src, 9);
	printf("Después de memmove dst es %s y src es %s\n", dst, src);
	return (0);
}
*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;

	if (!dst || !src)
		return (NULL);
	i = 0;
	if (dst < src)
	{
		while (i < (int)len)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}
	}
	else
	{
		i = (int)len - 1;
		while (i >= 0)
		{
		((char *)dst)[i] = ((char *)src)[i];
			i--;
		}
	}
	return (dst);
}
/* if es  //Si la posición inicial de dest es menor que la posición
inicial de src, entonces copie de izquierda a derecha. Else
es al reves, de derecha a izda. */
