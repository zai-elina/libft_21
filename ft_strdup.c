/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bneucar <bneucar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 20:17:47 by bneucar           #+#    #+#             */
/*   Updated: 2021/10/12 15:40:42 by bneucar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char		*dest;
	size_t		count;
	size_t		i;

	i = 0;
	count = ft_strlen(src);
	dest = (char *)malloc(sizeof(char ) * (count + 1));
	if (dest == (void *)0)
		return ((void *)0);
	while (i <= count)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
