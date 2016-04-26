/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmerlier <tmerlier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 10:57:44 by tmerlier          #+#    #+#             */
/*   Updated: 2014/04/16 19:02:17 by tmerlier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int		ft_sign(const char *s, int i, int sign)
{
	int	nb;

	nb = 0;
	while (ft_isdigit(s[i]))
	{
		nb *= 10;
		nb += *(s + i) - '0';
		i++;
	}
	return (nb * sign);
}

int				ft_atoi(const char *s)
{
	int			sign;
	int			i;

	sign = 1;
	i = 0;
	while (s[i] == '\n' || s[i] == '\v' || s[i] == '\t'
			|| s[i] == '\r' || s[i] == '\f' || s[i] == ' ')
		i++;
	if (!(s[i] >= '0' && s[i] <= '9') && s[i] != '-' && s[i] != '+')
		return (0);
	if (ft_isdigit(s[i]))
		return (ft_sign(s, i, sign));
	if (s[i] == '+' && ft_isdigit(s[i + 1]))
		return (ft_sign(s, (i + 1), sign));
	if (s[i] == '-' && ft_isdigit(s[i + 1]))
	{
		sign = -1;
		return (ft_sign(s, (i + 1), sign));
	}
	return (0);
}
