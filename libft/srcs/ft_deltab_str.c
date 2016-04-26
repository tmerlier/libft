/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_deltab_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmerlier <tmerlier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/10 18:34:18 by tmerlier          #+#    #+#             */
/*   Updated: 2014/03/20 10:34:43 by tmerlier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void		ft_deltab_str(char ***c_env)
{
	int			i;

	if (*c_env)
	{
		i = 0;
		while ((*c_env)[i])
			free((*c_env)[i++]);
		free(*c_env);
		*c_env = NULL;
	}
}
