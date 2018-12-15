/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poh <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 21:00:59 by poh               #+#    #+#             */
/*   Updated: 2018/12/15 03:27:11 by poh              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *whole, const char *part)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!part[j])
		return ((char*)whole);
	while(whole[i])
	{
		while (whole[i + j] == part[j])
		{
			if (part[j + 1] == '\0')
				return ((char*)whole + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
