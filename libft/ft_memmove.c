/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidabdes <ussef.id@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 22:05:15 by yidabdes          #+#    #+#             */
/*   Updated: 2018/10/09 22:05:16 by yidabdes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int		i;
	char	*strdst;
	char	*strsrc;

	i = (int)len;
	strdst = (char *)dst;
	strsrc = (char *)src;
	if (strsrc > strdst)
		ft_memcpy(strdst, strsrc, i);
	else
	{
		while (i--)
			strdst[i] = strsrc[i];
	}
	return (dst);
}
