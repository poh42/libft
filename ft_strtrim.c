/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poh <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 23:50:21 by poh               #+#    #+#             */
/*   Updated: 2018/12/15 02:22:30 by poh              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	spacecount(size_t *start, size_t *scount, char const *s)
{
	size_t	onoff;
	size_t	i;

	i = 0;
	onoff = 0;
	while (s[i] != '\0')
	{
		if (s[i] == ' ' | s[i] == '\n' | s[i] == '\t')		
			(*scount)++;
		else if (*start == i)
			onoff++;
		else if (start == 0 && onoff == 0 && i != 0)
			*start += i;
		i++;
	} 
}
char	*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	scount;
	size_t	i;
	char	*p;

	scount = 0;
	start = 0;
	i = 0;
	spacecount(&start, &scount, s);
	if (scount == 0)
	{
		if(!(p = (char*)malloc(sizeof(s))))
			return (NULL);
		while(s[i] != '\0')
		{
			p[i] = s[i];
			i++;
		}
		return (p);
	}
	p = (char*)malloc(sizeof(s) - scount);
	while(s[start] != '\0')
	{
		p[i] = s[start];
		i++;
		start++;
	}
	return (p);
}
