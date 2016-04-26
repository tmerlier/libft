/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amazie <amazie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/02 16:12:53 by amazie            #+#    #+#             */
/*   Updated: 2015/01/28 17:02:05 by tmerlier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <libft.h>

static int	set_end(char **buffer)
{
	if (*buffer != '\0')
		free(*buffer);
	*buffer = NULL;
	return (0);
}

static int	in_array(char c, char *str)
{
	int	i;

	i = 0;
	while (str != '\0' && str[i] != '\0')
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	if (c == 0)
		return (i);
	return (-1);
}

static int	str_pos_cpy(char *dest, char *src, char c)
{
	int	i;

	i = 0;
	while (src != '\0' && src[i] != c)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}

static int	fill_buffer(int const fd, char **buffer)
{
	char	reader[BUFF_SIZE + 1];
	char	*tmp;
	int		i;

	while ((i = read(fd, reader, BUFF_SIZE)) > 0)
	{
		reader[i] = 0;
		if ((tmp = (char *)malloc(sizeof(char) * (in_array('\0', *buffer)\
			+ in_array('\0', reader) + 1))) == NULL)
			return (-1);
		str_pos_cpy(tmp, *buffer, '\0');
		str_pos_cpy(tmp + in_array('\0', tmp), reader, '\0');
		free(*buffer);
		if ((*buffer = malloc(sizeof(**buffer)\
			* (in_array('\0', tmp) + 1))) == NULL)
			return (-1);
		str_pos_cpy(*buffer, tmp, '\0');
		free(tmp);
		if (in_array('\n', *buffer) != -1)
			return (1);
	}
	if (i < 0 || (i == 0 && in_array('\0', *buffer) == 0))
		return (0);
	return (1);
}

int			get_next_line(int const fd, char **line)
{
	static char	*buffer;
	int			i;

	if (fd < 0 || fill_buffer(fd, &buffer) != 1)
		return (set_end(&buffer));
	if (in_array('\n', buffer) != -1)
	{
		if ((*line = malloc(sizeof(*line)\
			* (in_array('\n', buffer) + 1))) == NULL)
			return (-1);
		i = str_pos_cpy(*line, buffer, '\n');
		str_pos_cpy(buffer, buffer + i + 1, '\0');
	}
	else
	{
		if ((*line = malloc(sizeof(*line)\
			* (in_array('\0', buffer) + 1))) == NULL)
			return (-1);
		str_pos_cpy(*line, buffer, '\0');
		set_end(&buffer);
	}
	return (1);
}
