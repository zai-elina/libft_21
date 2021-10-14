/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bneucar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 13:49:39 by bneucar           #+#    #+#             */
/*   Updated: 2021/10/14 14:01:14 by bneucar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_strrchr(const char	*s, int c)
{
	int		i;
	char	*last;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			last = (char *)s + i;
		i++;
	}
	if (last)
		return (last);
	if (c == s[i])
		return ((char *)s + i);
	return (0);
}
