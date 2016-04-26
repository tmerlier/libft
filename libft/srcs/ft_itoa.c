/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmerlier <tmerlier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 18:56:33 by tmerlier          #+#    #+#             */
/*   Updated: 2014/04/16 19:05:02 by tmerlier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

static int	ft_sign(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

char		*ft_itoa(int n)
{
	char	*s;
	int		len;
	int		sign;

	len = 10;
	if (n == -2147483648)
		return (s = ft_strdup("-2147483648"));
	if ((s = ft_strnew(12)) == NULL)
		return (NULL);
	if (n == 0)
	{
		*s = '0';
		return (s);
	}
	if ((sign = ft_sign(n)))
		n *= -1;
	while (n)
	{
		s[len--] = n % 10 + '0';
		n /= 10;
	}
	if (sign)
		s[len] = '-';
	return (ft_memmove(s, s + len + !sign, ft_strlen(s + len + !sign) + 1));
}
