/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poh <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 21:42:06 by poh               #+#    #+#             */
/*   Updated: 2018/12/15 06:04:27 by poh              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*start;
	char	*ret;

	ret = NULL;
	start = NULL;
	if (s && f)
	{
		if ((ret = malloc(sizeof(char) * (ft_strlen(s) + 1))))
		{
			start = ret;
			while (*s)
			{
				*ret = f((char)*s);
				s++;
				ret++;
			}
			*ret = '\0';
		}
	}
	return (start);
}
