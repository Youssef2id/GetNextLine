/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidabdes <ussef.id@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 00:56:29 by yidabdes          #+#    #+#             */
/*   Updated: 2018/11/03 03:10:43 by yidabdes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFF_SIZE 42

int		ft_strlen(const char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != 0)
		counter++;
	return (counter);
}

char	*ft_strdup(const char *s1)
{
	int		len1;
	int		i;
	char	*str1;

	len1 = ft_strlen(s1);
	i = 0;
	str1 = (char *)malloc(sizeof(char) * (len1 + 1));
	if (str1 == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		str1[i] = s1[i];
		i++;
	}
	str1[i] = '\0';
	return (str1);
}

void	ft_reset(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		str[i] = 0;
		i++;
	}
}

void get(int fd)
{
	char			*buff;
	int				i;
	static char		*backup;

	i = 0;
	buff = (char *)malloc(BUFF_SIZE * sizeof(char));
	ft_reset(buff);
	printf("\033[1m\033[32m----------------------------------------------------------------------------------------------------------------------------------------\n\t\tThis Is A BACKUP\n----------------------------------------------------------------------------------------------------------------------------------------\033[0m\n%s\n", backup);
	read(fd, buff,BUFF_SIZE);
	while (buff[i] != 0)
	{
		if (buff[i] == '\n')
			buff[i] = ' ';
		i++;
	}
	backup = ft_strdup((const char*)buff);
	printf("\033[1m\033[35m----------------------------------------------------------------------------------------------------------------------------------------\n\t\tThis Is A BUFFER\n----------------------------------------------------------------------------------------------------------------------------------------\033[0m\n%s\n", buff);
	ft_reset(buff);
}

int main(void)
{
	int				fd;

	fd = open("hello", O_RDONLY);
	get(fd);
	get(fd);
	get(fd);
	get(fd);
	close(fd);
	return 0;
}