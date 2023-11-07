/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marnguye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:42:35 by marnguye          #+#    #+#             */
/*   Updated: 2023/10/20 14:42:37 by marnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>

int		ft_atoi(char *str);
//convert a string to an integer
void	ft_bzero(void *s, size_t n);
//zero a byte string
void	*ft_calloc(size_t count, size_t size);
//allocates memory and sets its bytes values to 0
int		ft_isalnum(int i);
//checks for an alphanumeric character
int		ft_isalpha(int i);
//checks for an alphabetic character
int		ft_isascii(int i);
//checks whether c fits into the ASCII character set
int		ft_isdigit(int i);
//checks for a digit (0-9)
int		ft_isprint(int i);
//checks for anz printable character
void	*ft_memchr(const void *s, int c, size_t n);
	//scan memory for a character
int		ft_memcmp(const void *s1, const void *s2, size_t n);
//compare memory areas
void	*ft_memcpy(void *dest, const void *src, size_t n);
//copy memory area
void	*ft_memmove(void *s1, const void *s2, size_t n);
//copy memory area
void	*ft_memset(void *str, int c, size_t len);
//fill memory with a constant byte
char	*ft_strchr(const char *s, int i);
//locate character in string
char	*ft_strdup(const char *s);
//creates a duplicate for the string passed as parameter
size_t	ft_strlcat(char *dest, const char *src, size_t size);
//concatenate string to an specific size
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
	//copy string to an specific size
int		ft_strlen(const char *str);
//calculate the length of a string
int		ft_strncmp(const char *s1, char *s2, size_t n);
//compare two strings
char	*ft_strnstr(const char *text, char *pattern, size_t n);
//locate a substring in a string
char	*ft_strrchr(const char *s, int c);
//locate character in a string
int		ft_tolower(int i);
//convert char to lowercase
int		ft_toupper(int i);
//convert char to uppercase
char	*ft_substr(char const *s, unsigned int start, size_t len);
//returns a substring from a string
char	*ft_strjoin(char const *s1, char const *s2);
//concatenates two strings
char	*ft_strtrim(char const *s1, char const *set);
//trins the beginning and end of string with specific set of chars
char	**ft_split(char const *s, char c);
//splits a string using a chara as parameter
char	*ft_itoa(int n);
//converts a number into a string
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
//applies a function to each character of a string
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
//applies a function to each character of a string
void	ft_putchar_fd(char c, int fd);
//output a char to a file descriptor
void	ft_putstr_fd(char *s, int fd);
//output a string to a file descriptor
void	ft_putendl_fd(char *s, int fd);
//output a string to a file descriptor, followed bz a new line
void	ft_putnbr_fd(int n, int fd);
//output a number to a file descriptor

#endif
