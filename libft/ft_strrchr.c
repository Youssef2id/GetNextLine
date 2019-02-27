/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidabdes <ussef.id@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 00:49:49 by yidabdes          #+#    #+#             */
/*   Updated: 2018/10/12 00:49:51 by yidabdes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		i;
	int		last;

	i = 0;
	last = -1;
	str = (char *)s;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			last = i;
		i++;
	}
	if (str[i] == '\0' && c == 0)
		return (&str[i]);
	if (last != -1)
		return (&str[last]);
	return (NULL);
}
