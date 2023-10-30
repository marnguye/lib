/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marnguye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:41:09 by marnguye          #+#    #+#             */
/*   Updated: 2023/10/20 13:41:10 by marnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int ft_strncmp(const char *s1, char *s2, size_t n)
{
	while (n > 0)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		else if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
		n--;
	}
	return (0);
}

char *ft_strnstr(const char *text, char *pattern, size_t n)
{
	size_t len;

	len = ft_strlen(pattern);
	while (*text != '\0' && n >= len)
	{
		if (ft_strncmp(text, pattern, len) == 0)
		{
			return ((char *)text);
		}
		text++;
		n--;
	}
	return (NULL);
}
