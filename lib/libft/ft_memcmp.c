/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marnguye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:36:36 by marnguye          #+#    #+#             */
/*   Updated: 2023/10/17 12:36:38 by marnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*p1;
	const char	*p2;

	p1 = s1;
	p2 = s2;
	if (n == 0)
		return (0);
	if (*p1 < *p2)
		return (-1);
	else if (*p1 > *p2)
		return (1);
	return (ft_memcmp(p1 + 1, p2 + 1, n - 1));
}
