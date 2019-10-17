/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 13:18:13 by aes-salm          #+#    #+#             */
/*   Updated: 2019/10/12 13:18:44 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

void	*ft_memset(void *str, int c, size_t n);
void	ft_bzero(void *str, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memchr(const void *str, int ch, size_t c);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *str, int c, size_t n);
void	*ft_calloc(size_t nitems, size_t size);
char	*ft_strdup(const char *str);
char	*ft_strchr(const char *str, int c);
char	*f_strnstr(const char *str, const char *chr, size_t len);
char	*ft_strrchr(const char *str, int c);
int		ft_atoi(char *str);
int		ft_isalnum(int arg);
int		ft_isalpha(int arg);
int		ft_isascii(int arg);
int		ft_isdigit(int arg);
int		ft_isprint(int arg);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
int		ft_strlen(char *str);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
int		ft_tolower(int arg);
int		ft_toupper(int arg);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
#endif
