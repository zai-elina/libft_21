/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bneucar <bneucar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 15:26:43 by bneucar           #+#    #+#             */
/*   Updated: 2021/10/14 17:12:52 by bneucar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	len_needle;
	int		j;

	i = 0;
    if (!*needle)
		return((char *)haystack);
    len_needle = ft_strlen(needle);
	while (haystack[i] &&  (len - len_needle + 1) > 0 && len--)
	{
        j=0;
		while (needle[j] && needle[j] == haystack[i+j])
		{
			j++;
			if (!needle[j])
				return ((char *)haystack + i);
		}
		i++;
	}
	return (NULL);
}
