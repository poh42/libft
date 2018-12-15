/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poh <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 02:41:23 by poh               #+#    #+#             */
/*   Updated: 2018/12/15 07:57:55 by poh              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countit(char const *s, char c)
{
	unsigned int	i;
	int				count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (count);
}

static char	*ft_strndup(const char *s, size_t n)
{
	char	*p;

	p = (char *)malloc(sizeof(char) * n + 1);
	if (p == NULL)
		return (NULL);
	p = ft_strncpy(p, s, n);
	p[n] = '\0';
	return (p);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**sp;

	i = 0;
	k = 0;
	sp = (char **)malloc(sizeof(char *) * (countit(s, c)) + 1);
	if (sp == NULL)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
		{
			sp[k] = ft_strndup(s + j, i - j);
			k++;
		}
	}
	sp[k] = NULL;
	return (sp);
}
