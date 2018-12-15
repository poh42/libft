/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poh <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 05:12:15 by poh               #+#    #+#             */
/*   Updated: 2018/12/15 04:33:00 by poh              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*t;

	if (!(t = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (content == NULL)
	{
		t->content = NULL;
		t->content_size = 0;
	}
	else
	{
		if (!(t->content = malloc(content_size)))
		{
			free(t);
			return (NULL);
		}
		t->content_size = content_size;
		ft_memcpy(t->content, content, content_size);
	}
	t->next = NULL;
	return (t);
}
