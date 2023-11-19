/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marnguye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:10:55 by marnguye          #+#    #+#             */
/*   Updated: 2023/11/01 15:10:56 by marnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char			*new_str;
	int				length_of_str;
	unsigned int	i;

	length_of_str = ft_strlen(str);
	new_str = (char *) malloc(sizeof (char) * (length_of_str + 1));
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != 0)
	{
		new_str[i] = (char) str[i];
		i++;
	}
	new_str[i] = 0;
	return (new_str);
}
