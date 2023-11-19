/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marnguye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:41:37 by marnguye          #+#    #+#             */
/*   Updated: 2023/10/20 13:41:39 by marnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int character)
{
	char	*result;

	result = NULL;
	while (*str != '\0')
	{
		if (*str == (char)character)
			result = (char *)str;
		str++;
	}
	if (character == '\0')
		return ((char *)str);
	return (result);
}
