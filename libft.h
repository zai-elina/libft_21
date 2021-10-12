/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bneucar <bneucar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 17:22:16 by bneucar           #+#    #+#             */
/*   Updated: 2021/10/12 15:41:11 by bneucar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H


#include<string.h>
#include<stdlib.h>

int		ft_isalpha(int c);
int		ft_isdigit(int n);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
int		ft_tolower(int c);
int		ft_toupper(int c);  
void	*ft_memset(void *b, int c, size_t len);
void    ft_bzero(void *s, size_t n);
int ft_strncmp(const char *s1, const char *s2, size_t n);
int ft_atoi(char *str);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t len);
size_t    ft_strlcpy(char *dst, const char *src, size_t dstsize);
char	*ft_strdup(const char *src);


#endif
