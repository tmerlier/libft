/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_countword.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmerlier <tmerlier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 20:19:00 by tmerlier          #+#    #+#             */
/*   Updated: 2014/04/16 19:09:54 by tmerlier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isspace(char c)
{
	if (c != '\0')
		if (c == ' ' || c == '\t' || c == 10)
			return (1);
	return (0);
}

int		ft_strword(char *str)
{
	int		i;

	i = 0;
	while (*str)
	{
		while (*str && ft_isspace(*str))
			str++;
		if (*str)
			i++;
		while (*str && !ft_isspace(*str))
			str++;
	}
	return (i);
}
