/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poh <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 22:18:08 by poh               #+#    #+#             */
/*   Updated: 2018/12/15 05:39:49 by poh              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char		*str;
	int			n;

	n = ft_strlen(s1);
	if (!(str = (char *)malloc(sizeof(char) * (n + 1))))
		return (NULL);
	while (*s1)
		*str++ = *s1++;
	*str = '\0';
	str -= n;
	return (str);
}
