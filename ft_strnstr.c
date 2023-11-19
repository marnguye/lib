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

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	if (s2[0] == '\0')
		return ((char *)s1);
	i = 0;
	while (s1[i] != '\0' && i < n)
	{
		if (s1[i] == s2[0])
		{
			j = 0;
			while (s2[j] != '\0' && j + i < n)
			{
				if (s1[i + j] == s2[j] && s2[j + 1] == '\0')
					return ((char *)&s1[i]);
				else if (s1[i + j] != s2[j])
					break ;
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
