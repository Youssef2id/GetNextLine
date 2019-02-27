/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidabdes <ussef.id@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 20:31:37 by yidabdes          #+#    #+#             */
/*   Updated: 2018/10/09 20:31:41 by yidabdes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	const unsigned char *strsrc;
	unsigned char		*strdst;
	int					i;
	unsigned char		*p;

	i = 0;
	strsrc = (unsigned char *)src;
	strdst = (unsigned char *)dest;
	while (i < (int)n)
	{
		strdst[i] = strsrc[i];
		if (strdst[i] == (unsigned char)c)
		{
			p = &strdst[i + 1];
			return (p);
		}
		i++;
	}
	return (NULL);
}
