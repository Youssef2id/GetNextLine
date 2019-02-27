/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidabdes <ussef.id@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 23:45:22 by yidabdes          #+#    #+#             */
/*   Updated: 2018/10/06 23:45:25 by yidabdes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	unsigned int	i;
	int				j;

	j = 0;
	i = 0;
	str = b;
	while (i < (unsigned int)len)
	{
		str[j] = c;
		i++;
		j++;
	}
	return (b);
}
