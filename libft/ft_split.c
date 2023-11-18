/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvojemama.com <tvojemama.com@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:31:12 by marnguye          #+#    #+#             */
/*   Updated: 2023/11/10 17:53:15 by tvojemama.c      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t word_count(char const *s, char c)
{
	size_t count;
	size_t i;

	count = 0;
	i = 0;
	while (*s)
	{
		if (*s != c && i == 0)
		{
			i = 1;
			count++;
		}
		else if (*s == c)
			i = 0;
		s++;
	}
	return (count);
}

static size_t move_ptr(char const *s, size_t n, size_t *index, char c)
{
	size_t i;

	i = 0;
	if (c < 0)
	{
		*index = *index + 1;
		while (n)
		{
			if (*s == '\0')
				return (i);
			s++;
			n--;
			i++;
		}
	}
	else
	{
		while (s[i] == c)
			i++;
	}
	return (i);
}

static char *word_dup(const char *str, int size)
{
	char *word;

	word = (char *)malloc((size + 1) * sizeof(char));
	if (!word)
		return (NULL);
	ft_strlcpy(word, str, size + 1);
	return (word);
}

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t i;

	i = 0;
	if (size == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (i < size)
		dest[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}

static char **free_all(char **ptr, size_t count)
{
	while (count)
	{
		free(ptr[count]);
		count--;
	}
	free(ptr);
	return (NULL);
}

char *ft_strchr(const char *str, int character)
{
	while (*str != '\0')
	{
		if (*str == (char)character)
			return ((char *)str);
		str++;
	}
	if (character == '\0')
		return ((char *)str);
	return (NULL);
}

int ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char **ft_split(char const *s, char c)
{
	const char *str;
	char **ptr;
	size_t i;

	if (!s)
		return (NULL);
	str = s;
	ptr = (char **)malloc((word_count(s, c) + 1) * sizeof(char *));
	i = 0;
	while (*s != '\0' && ptr)
	{
		s += move_ptr(s, 0, 0, c);
		if (*s == '\0')
			break;
		str = ft_strchr(s, c);
		if (!str)
			str = (char *)s + ft_strlen(s);
		ptr[i] = (char *)word_dup(s, str - s);
		if (!ptr[i])
			return (free_all(ptr, i + 1));
		s += move_ptr(s, str - s, &i, -1);
	}
	if (ptr)
		ptr[i] = 0;
	return (ptr);
}
