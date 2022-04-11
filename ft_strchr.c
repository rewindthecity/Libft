/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-c <agomez-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 13:40:21 by agomez-c          #+#    #+#             */
/*   Updated: 2022/04/11 20:46:05 by agomez-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c);

int	main(void)
{
	const char	str[] = "hola varys";
	char		c;
	char		*ret;

	c = 'a';
	//ret = strchr(str, c);
	ret = ft_strchr(str, c);
	printf("String after |%c| is |%s|\n", c, ret);
	return (0);
}
*/
/*
char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	if (!s)
		return (NULL);
	i = 0;
	str = (char *)s;
	while (str[i])
	{
		if (str[i] == (char)c)
		{
			return (&str[i]);
		}
		i++;
	}
	if (c == '\0')
		return (&str[i]);
	return (NULL);
}
*/

/*char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		if (c == '\0')
		{
			return (NULL);
		}
		s++;
	}
	return (0);
}
*/

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s != '\0' && *s != ((char)c))
		s++;
	if (*s == c)
	{
		return ((char *)s);
	}
	return (0);
}

/* probar testers casteando y sin castear char c */
