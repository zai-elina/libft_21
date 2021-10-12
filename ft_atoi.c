/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bneucar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 12:57:22 by bneucar           #+#    #+#             */
/*   Updated: 2021/10/12 13:02:26 by bneucar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

int	ft_atoi(char *str)
{
	int	i;
	int	minus;
	int	num;

	i = 0;
	minus = 0;
	num = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\r' || str[i] == '\n' || str[i] == '\v'|| str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+' )
	{
		if (str[i] == '-')
			minus = 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num *= 10;
		num += str[i] - '0';
		i++;
	}
	if (minus == 1)
		num = -num;
	return (num);
}
