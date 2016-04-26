/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_isint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmerlier <tmerlier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 20:16:16 by tmerlier          #+#    #+#             */
/*   Updated: 2014/02/22 20:48:38 by tmerlier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_str_isint(char *str, int len)
{
	while (*str == ' ' || *str == '\t')
		str++;
	if (*str == '-' || *str == '+')
		str++;
	if (len == 10)
	{
		if (ft_strcmp(str, "2147483647") > 0)
			return (1);
	}
	else if (len > 10)
		return (1);
	return (0);
}
