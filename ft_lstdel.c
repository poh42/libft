/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poh <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/15 02:29:56 by poh               #+#    #+#             */
/*   Updated: 2018/12/15 02:48:19 by poh              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*hold;
	t_list	*next;

	hold = *alst;
	if (del != NULL)
	{
		while (hold != NULL)
		{
			next = hold->next;
			del(hold->content, hold->content_size);
			free(hold);
			hold = next;
		}
		*alst = NULL;
	}
}
