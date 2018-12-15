/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poh <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 23:49:09 by poh               #+#    #+#             */
/*   Updated: 2018/12/15 06:05:07 by poh              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*ret;

	ret = NULL;
	i = 0;
	if (s && f)
	{
		if ((ret = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		{
			while (s[i])
			{
				ret[i] = f(i, s[i]);
				i++;
			}
			ret[i] = '\0';
		}
	}
	return (ret);
}
