/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bneucar <bneucar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:06:00 by bneucar           #+#    #+#             */
/*   Updated: 2021/10/12 18:00:21 by bneucar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

size_t    ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t    i;

    i = 0;
    if (!dst || !src)
        return (0);
    if (dstsize > 0)
    {
        while (i < (dstsize - 1) && src[i] != '\0')
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] ='\0';
    }
    return (ft_strlen(src));
}
