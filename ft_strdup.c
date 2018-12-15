/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poh <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 22:18:08 by poh               #+#    #+#             */
/*   Updated: 2018/12/15 03:17:59 by poh              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;

	str = (char*)malloc(sizeof(char) * (strlen(s1) + 1));
	while (*s1)
	{
		*str = *s1;
		s1++;
		str++;
	}
	*str = *s1; //gives the last space the nulterminator
	return str;
}
