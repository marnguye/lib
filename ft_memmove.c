/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marnguye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:21:44 by marnguye          #+#    #+#             */
/*   Updated: 2023/10/17 13:21:47 by marnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	unsigned char	*dest;
	unsigned char	*src;

	dest = (unsigned char *)s1;
	src = (unsigned char *)s2;
	if (!dest && !src)
		return (dest);
	if (dest < src)
	{
		while (n--)
			*dest++ = *src++;
	}
	else
	{
		while (n--)
		{
			*(dest + n) = *(src + n);
		}
	}
	return (s1);
}
