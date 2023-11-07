/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marnguye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:50:12 by marnguye          #+#    #+#             */
/*   Updated: 2023/10/20 13:50:29 by marnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, char *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	unsigned int	i;

	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	i = 0;
	while ((*str1 != 0 || *str2 != 0) && n > i)
	{
		if (*str1 < *str2)
			return (-1);
		else if (*str1 > *str2)
			return (1);
		str1++;
		str2++;
		i++;
	}
	return (0);
}
