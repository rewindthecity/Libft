/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-c <agomez-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 18:29:43 by agomez-c          #+#    #+#             */
/*   Updated: 2022/04/01 18:58:40 by agomez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#include <stdio.h>
#include <ctype.h>

int	ft_tolower(int c);

int	main(void)
{
	char	c;

	c = 'F';
	//printf("%c", tolower(c));
	printf("%c", ft_tolower(c));
	return (0);
}
*/
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = c - 'A' + 'a';
	}
	return (c);
}
