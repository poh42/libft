/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmir.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poh <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/15 08:01:50 by poh               #+#    #+#             */
/*   Updated: 2018/12/15 08:42:25 by poh              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strmir(char *s)
{
	char	c;
	size_t	start;
	size_t	end;

	start = 0;
	end = ft_strlen(s);
	while (start < end)
	{
		c = *(s + start);
		*(s + start) = *(s + end);
		*(s + end) = c;
		start++;
		end--;
	}
}
