/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bneucar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 14:44:27 by bneucar           #+#    #+#             */
/*   Updated: 2021/10/12 15:23:32 by bneucar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char *ptr;
	unsigned char *ptr1;

	ptr = (unsigned char *)dest;
	ptr1 = (unsigned char *)src;
	if (ptr < ptr1)
		while (len--)
			*(ptr++) = *(ptr1++);
	else
	{
		ptr += len - 1;
		ptr1 += len - 1;
		while (len--)
			*(ptr--) = *(ptr1--);
	}
	return (dest);
}
