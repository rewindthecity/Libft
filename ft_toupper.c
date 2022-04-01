/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-c <agomez-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 18:52:00 by agomez-c          #+#    #+#             */
/*   Updated: 2022/04/01 19:00:13 by agomez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#include <stdio.h>
#include <ctype.h>

int	ft_toupper(int c);

int	main(void)
{
	char	c;

	c = 'f';
	//printf("%c", toupper(c));
	printf("%c", ft_toupper(c));
	return (0);
}
*/
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 'a' + 'A';
	}
	return (c);
}
