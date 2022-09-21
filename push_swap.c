/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 12:29:06 by julmuntz          #+#    #+#             */
/*   Updated: 2022/09/21 14:14:42 by julmuntz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int arc, char **arv)
{
	int i;

	i = 1;
	if (arc > 1)
	{
		while (arv[i])
		{
			if (ps_invalid_input(arv[i]) == TRUE)
				return (ft_printf("Error\n"), TRUE);
			else
				ft_printf("%d\n", ft_atoi(arv[i]));
			i++;
		}
	}
	return (0);
}
