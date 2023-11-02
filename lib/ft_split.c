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

static int	count_word(char const *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s != '\0')
	{
		if (*s != c)
		{
			if (word == 0)
			{
				word = 1;
				i++;
			}
		}
		else
			word = 0;
		s++;
	}
	return (i);
}

static int	size_word(char const *s, char c, int i)
{
	int	size;

	size = 0;
	while (s[i] != c && s[i])
	{
		size++;
		i++;
	}
	return (size);
}

static void	ft_free(char **str, int j)
{
	while (j >= 0)
	{
		free(str[j]);
		j--;
	}
	free(str);
}

static char	*split_word(const char s, char c)
{
	int		size;
	char	word;
	int		i;

	size = size_word(s, c, 0);
	word = (char *)malloc((size + 1) sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (i < size)
	{
		word[i] = s[i];
		i++;
	}
	word[size] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		str;

	i = 0;
	str = (char **)malloc((count_word(s, c) + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	while (s)
	{
		if (*s != c)
		{
			str[i] = split_word(s, c);
			if (!str[i])
			{
				ft_free(str, i - 1);
				return (NULL);
			}
			i++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	str[i] = 0;
	return (str);
}
