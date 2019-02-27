/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yidabdes <yidabdes@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 01:51:50 by yidabdes          #+#    #+#             */
/*   Updated: 2018/11/17 20:46:59 by yidabdes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static	int	ft_findln(int fd, char **buf, char **line)
{
	char		*restof;

	while ((restof = ft_strchr(buf[fd], '\n')))
	{
		*restof = '\0';
		*line = ft_strsub(buf[fd], 0, restof - buf[fd]);
		buf[fd] = ft_strdup(restof + 1);
		return (1);
	}
	while (*buf[fd])
	{
		*line = ft_strnew(ft_strlen(buf[fd]));
		ft_strcpy(*line, buf[fd]);
		buf[fd] = ft_memalloc(BUFF_SIZE + 1);
		return (1);
	}
	return (0);
}

static	int	ft_read(int fd, char **buf)
{
	char		*tmp;
	int			i;

	tmp = ft_strnew(BUFF_SIZE);
	while ((i = read(fd, tmp, BUFF_SIZE)) > 0)
	{
		if (!buf[fd])
		{
			buf[fd] = ft_strnew(ft_strlen(tmp));
			ft_strcpy(buf[fd], tmp);
		}
		else
			buf[fd] = ft_strjoin(buf[fd], tmp);
		if (ft_strchr(buf[fd], '\n'))
			break ;
		ft_memset(tmp, 0, BUFF_SIZE);
	}
	free(tmp);
	return (i);
}

int			get_next_line(const int fd, char **line)
{
	static	char	*buf[MAXFD];

	if (!line || fd < 0 || BUFF_SIZE < 0 || (ft_read(fd, &buf[fd]) < 0) ||
fd > MAXFD)
		return (-1);
	if (ft_findln(fd, &buf[fd], line) == 1)
		return (1);
	return (0);
}
