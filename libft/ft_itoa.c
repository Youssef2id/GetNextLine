/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidabdes <ussef.id@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 20:41:08 by yidabdes          #+#    #+#             */
/*   Updated: 2018/10/22 23:10:07 by yidabdes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static	int		ft_nbrlen(int n)
{
	int nbdigit;

	nbdigit = 0;
	if (n < 0)
	{
		nbdigit++;
		n = -1 * n;
	}
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		nbdigit++;
	}
	return (nbdigit);
}

static	int		ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power > 0)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	else
	{
		return (0);
	}
}

char			*ft_itoa(int n)
{
	char		*nb;
	int			i;
	int			len;
	long int	nbr;

	i = 0;
	nbr = (long int)n;
	len = ft_nbrlen(n);
	if (!(nb = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	if (n < 0)
	{
		nbr = -1 * nbr;
		nb[i++] = '-';
		len--;
	}
	while (i < ft_nbrlen(n))
	{
		nb[i] = (nbr / ft_recursive_power(10, len - 1)) + '0';
		nbr = nbr % ft_recursive_power(10, len - 1);
		i++;
		len--;
	}
	nb[i] = '\0';
	return (nb);
}
