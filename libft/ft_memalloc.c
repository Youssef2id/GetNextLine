/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidabdes <ussef.id@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/15 20:57:45 by yidabdes          #+#    #+#             */
/*   Updated: 2018/10/22 23:24:31 by yidabdes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t	*mem;
	int		i;

	i = 0;
	mem = (void *)malloc(size * sizeof(mem));
	if (mem == NULL)
		return (NULL);
	while (size--)
	{
		mem[i] = 0;
		i++;
	}
	return (mem);
}
