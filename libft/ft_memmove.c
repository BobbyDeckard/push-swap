/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imeulema <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:45:46 by imeulema          #+#    #+#             */
/*   Updated: 2024/10/18 17:35:45 by imeulema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	verify_overlap(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = -1;
	while (++i < len)
		if (dst == &src[i])
			return (1);
	return (0);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!src && !dst)
		return (NULL);
	if (!verify_overlap(dst, src, len))
		ft_memcpy(dst, src, len);
	else
	{
		i = len;
		while (--i < len)
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
	}
	return (dst);
}
