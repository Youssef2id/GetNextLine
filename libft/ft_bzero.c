/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidabdes <ussef.id@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 21:08:36 by yidabdes          #+#    #+#             */
/*   Updated: 2018/10/07 21:08:37 by yidabdes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	unsigned int	i;
	int				j;

	i = 0;
	j = 0;
	str = s;
	while (i < (unsigned int)n)
	{
		str[j] = 0;
		i++;
		j++;
	}
}
