/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidabdes <ussef.id@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 22:31:52 by yidabdes          #+#    #+#             */
/*   Updated: 2018/10/11 22:31:53 by yidabdes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	unsigned int i;

	i = 0;
	while (i < (unsigned int)len && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	while (i < (unsigned int)len)
		dst[i++] = '\0';
	return (dst);
}
