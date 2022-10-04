/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdisplay.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 21:57:37 by julmuntz          #+#    #+#             */
/*   Updated: 2022/10/04 12:54:56 by julmuntz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdisplay(t_list *lst)
{
	while (lst)
	{
		ft_putendl(lst->content);
		lst = lst->next;
	}
	if (!lst)
		return ;
}

void	stackdisplay(t_stack *a, t_stack *b)
{
	while ((a) || (a && b))
	{
		ft_puttabs(ft_itoa(a->value), 2);
		ft_putendl(ft_itoa(b->value));
		a = a->next;
		b = b->next;
	}
	if ((a == NULL) || (a && b == NULL))
		return ;
}