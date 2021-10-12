/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bneucar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 17:53:49 by bneucar           #+#    #+#             */
/*   Updated: 2021/10/05 19:15:24 by bneucar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}