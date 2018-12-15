/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poh <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/15 02:53:20 by poh               #+#    #+#             */
/*   Updated: 2018/12/15 02:59:39 by poh              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*t;

	if (lst != NULL && f != NULL)
	{
		t = f(lst);
		if (t != NULL && lst->next != NULL)
			t->next = ft_lstmap(lst->next, f);
		return (t);
	}
	return (NULL);
}
