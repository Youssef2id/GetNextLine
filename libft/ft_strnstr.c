/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidabdes <ussef.id@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 21:15:04 by yidabdes          #+#    #+#             */
/*   Updated: 2018/10/14 21:15:06 by yidabdes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int i;

	i = 0;
	if (*s2 == '\0')
		return ((char *)s1);
	if (!s2)
		return ((char *)s1);
	while (*s1 != '\0' && n-- >= ft_strlen(s2))
	{
		if (ft_strncmp(s1, s2, ft_strlen(s2)) == 0)
			return ((char *)s1);
		s1++;
		i++;
	}
	return (NULL);
}
