/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poh <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 14:00:20 by poh               #+#    #+#             */
/*   Updated: 2018/12/15 03:04:57 by poh              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*hold;

	hold = (char *)malloc(sizeof(char) * len);
	if (hold == NULL)
		return (NULL);
	ft_memcpy(hold, src, len);
	ft_memcpy(dst, hold, len);
	return (dst);
}
