/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidabdes <ussef.id@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 22:10:35 by yidabdes          #+#    #+#             */
/*   Updated: 2018/10/07 22:10:40 by yidabdes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char			*str;
	const char		*sou;
	unsigned int	j;

	j = 0;
	sou = (char *)src;
	str = (char *)dst;
	while (j < (unsigned int)n)
	{
		str[j] = sou[j];
		j++;
	}
	return (dst);
}
