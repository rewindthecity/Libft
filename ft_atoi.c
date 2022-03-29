/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-c <agomez-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:05:27 by agomez-c          #+#    #+#             */
/*   Updated: 2022/03/28 17:06:12 by agomez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(char *str);

int	main(void)
{
	char	str[30] = "  	+-+--4567a9";

	//printf("%d", atoi(str));
	printf("%d", ft_atoi(str));
}
*/
int	ft_atoi(char *str)
{
	int		it;
	int		sign;
	int		number;

	it = 0;
	sign = 1;
	number = 0;
	while (str[it] == '\f' || str[it] == '\n' || str[it] == '\r'
		|| str[it] == '\t' || str[it] == '\v' || str[it] == ' ')
		it++;
	while (str[it] == '+' || str[it] == '-')
	{
		if (str[it] == '-')
			sign = sign * -1;
		it++;
	}
	while (str[it] >= '0' && str[it] <= '9')
	{
		number = (number * 10) + str[it] - '0';
		it++;
	}
	return (number * sign);
}

/* space, form-feed ('\f'), newline ('\n'), carriage return ('\r'),
horizontal tab ('\t'), and vertical tab ('\v'). +*/
