/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-c <agomez-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 13:21:20 by agomez-c          #+#    #+#             */
/*   Updated: 2022/03/29 15:17:58 by agomez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(int a);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);

int	main(void)
{
	int	a;

	a = 64;
	printf("Chequear isalpha %d", ft_isalpha(a));
	printf("Chequear isdigit %d", ft_isdigit(a));
	printf("Chequea isalnum %d", ft_isalnum(a));
	printf("Chequea isascii %d", ft_isascii(a));
	printf("Chequea isprint %d", ft_isprint(a));
}
