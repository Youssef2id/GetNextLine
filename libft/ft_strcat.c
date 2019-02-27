/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidabdes <ussef.id@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 23:24:37 by yidabdes          #+#    #+#             */
/*   Updated: 2018/10/11 23:24:42 by yidabdes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int len1;
	int	j;

	j = 0;
	len1 = (int)ft_strlen(s1);
	while (s2[j] != '\0')
	{
		s1[len1] = s2[j];
		j++;
		len1++;
	}
	s1[len1] = '\0';
	return (s1);
}
