/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poh <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 14:00:20 by poh               #+#    #+#             */
/*   Updated: 2018/12/15 05:38:10 by poh              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dstp;
	char	*srcp;

	dstp = (char*)dst;
	srcp = (char*)src;
	if (srcp < dstp)
		while (len--)
			*(dstp + len) = *(srcp + len);
	else
		while (len--)
			*dstp++ = *srcp++;
	return (dst);
}
