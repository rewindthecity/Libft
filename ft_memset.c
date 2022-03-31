/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-c <agomez-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 10:20:27 by agomez-c          #+#    #+#             */
/*   Updated: 2022/03/30 13:36:23 by agomez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <string.h>*/

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = b;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

/*int	main(void)
{
	char	b[] = "hola";
	int		c;
	size_t	len;

	c = 48; // el valor que va a cambiar
	len = 3; // cuantos lugares cambia
	ft_memset(b, c, len);
	printf("%s \n", b);
	printf("%s \n", memset(b, c, len)); // funcion original
}
*/
