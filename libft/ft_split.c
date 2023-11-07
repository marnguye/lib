/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marnguye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:31:12 by marnguye          #+#    #+#             */
/*   Updated: 2023/11/02 12:31:13 by marnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	string_len(char *str, char c)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	if (str[0] && str[0] != c)
		words++;
	while (str[i])
	{
		if (str[i] == c && (str[i + 1] != c && str[i + 1] != 0))
			words++;
		i++;
	}
	return (words);
}

char	*add_string(char *str, char c, int *index)
{
	int		i;
	int		len;
	char	*word;

	len = 0;
	while (str[len] && str[len] != c)
		len++;
	word = malloc(sizeof(char) * (len + 1));
	if (word == NULL)
		return (NULL);
	i = 0;
	*index = *index + len;
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = 0;
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	*str;
	char	**array;
	int		i;
	int		j;

	str = (char *) s;
	array = (char **) malloc(sizeof(char *) * (string_len(str, c) + 1));
	if (array == NULL)
		return (NULL);
	i = 0;
	j = 0;
	if (str[i] && str[i] != c)
		array[j++] = add_string(&str[i], c, &i);
	while (str[i])
	{
		if (str[i] == c && (str[i + 1] != c && str[i + 1] != 0))
			array[j++] = add_string(&str[i + 1], c, &i);
		i++;
	}
	array[j] = NULL;
	return (array);
}
