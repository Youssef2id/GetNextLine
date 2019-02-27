/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidabdes <ussef.id@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 02:16:58 by yidabdes          #+#    #+#             */
/*   Updated: 2018/10/21 14:41:52 by yidabdes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_nbmot(char const *str, char c)
{
	int			i;
	int			nbmot;

	i = 0;
	nbmot = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c && (str[i + 1] == '\0' || str[i + 1] == c))
			nbmot++;
		i++;
	}
	return (nbmot);
}

static char		**ft_allocate_str(char **array, char const *str, char c)
{
	int			i;
	int			nbmot;

	i = 0;
	nbmot = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			nbmot++;
			if (str[i + 1] == '\0' || str[i + 1] == c)
			{
				*array = (char *)malloc(sizeof(char) * (nbmot + 1));
				array++;
				nbmot = 0;
			}
		}
		i++;
	}
	return (array);
}

static char		**ft_fill_array(char **array, char const *str, char c)
{
	int			i;
	int			j;
	int			k;

	i = 0;
	j = 0;
	k = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			array[k][j] = str[i];
			j++;
			if (str[i + 1] == '\0' || str[i + 1] == c)
			{
				array[k][j] = '\0';
				k++;
				j = 0;
			}
		}
		i++;
	}
	array[k] = 0;
	return (array);
}

char			**ft_strsplit(char const *s, char c)
{
	char		**wordsarray;
	int			i;

	if (!s)
		return (NULL);
	i = ft_nbmot(s, c);
	wordsarray = (char **)malloc(sizeof(char *) * (i + 1));
	if (wordsarray == NULL)
		return (NULL);
	wordsarray = ft_allocate_str(wordsarray, s, c);
	wordsarray -= i;
	wordsarray = ft_fill_array(wordsarray, s, c);
	return (wordsarray);
}
