/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-c <agomez-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 12:11:33 by agomez-c          #+#    #+#             */
/*   Updated: 2022/03/30 13:43:39 by agomez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <strings.h>
#include <unistd.h>*/

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = s;
	i = 0;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}

/*int	main(void)
{
	char	str[] = "hola varys";
	size_t	n;

	n = 1;
	//bzero(s, n);
	ft_bzero(str, n);
	printf("%s \n", str);
	write(1, &str, 10);
	return (0);
}
*/
