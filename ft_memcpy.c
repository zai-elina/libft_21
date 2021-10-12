/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bneucar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 13:20:56 by bneucar           #+#    #+#             */
/*   Updated: 2021/10/12 13:32:08 by bneucar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*ptr1;

	ptr = (unsigned char *)dst;
	ptr1 = (unsigned char *)src;
	while (n--)
		*(ptr++) = *(ptr1++);
	return (dst);
}
