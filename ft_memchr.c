/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bneucar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 14:52:08 by bneucar           #+#    #+#             */
/*   Updated: 2021/10/14 14:57:25 by bneucar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	i;

	ptr = (unsigned char *)s;
	i = (unsigned char)c;
	while (n--)
	{
		if (*ptr == i)
			return (ptr);
		ptr++;
	}
	return (NULL);
}
