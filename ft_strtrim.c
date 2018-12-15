/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poh <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 23:50:21 by poh               #+#    #+#             */
/*   Updated: 2018/12/15 07:59:38 by poh              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	i;
	unsigned int	n;
	unsigned int	t;
	char			*p;

	i = 0;
	t = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	if (s[i] == '\0')
		return (ft_strcpy(ft_memalloc(sizeof(char) * 2), ""));
	n = ft_strlen(s) - 1;
	while (s[n] == ' ' || s[n] == '\n' || s[n] == '\t')
		n--;
	p = (char *)malloc(sizeof(char) * (n - i + 2));
	if (p == NULL)
		return (NULL);
	while (t < n - i + 1)
	{
		p[t] = s[i + t];
		t++;
	}
	p[t] = '\0';
	return (p);
}
