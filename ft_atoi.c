/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poh <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 21:06:11 by poh               #+#    #+#             */
/*   Updated: 2018/12/15 05:50:59 by poh              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	if (c == '\n' || c == '\t' || c == '\f' || c == '\r' \
			|| c == '\v' || c == ' ')
		return (1);
	return (0);
}

int			ft_atoi(const char *str)
{
	int					sign;
	unsigned long long	res;

	sign = 1;
	res = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str && ft_isdigit(*str))
	{
		res = res * 10 + *str - '0';
		if (res >= 9223372036854775807)
		{
			if (sign == -1)
				return (0);
			return (-1);
		}
		str++;
	}
	return ((int)sign * res);
}
