/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidki <isidki@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 10:57:51 by isidki            #+#    #+#             */
/*   Updated: 2023/02/08 16:31:53 by isidki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list **a, int c)
{
	t_list	*parcour;
	t_list	*tmp;

	if (*a && (*a)->next)
	{
		tmp = *a;
		*a = (*a)->next;
		parcour = *a;
		while (parcour->next)
			parcour = parcour->next;
		parcour->next = tmp;
		tmp->next = NULL;
	if (c == 0)
		write(1, "ra\n", 3);
	}
}

void	rb(t_list **b, int c)
{
	ra(b, 1);
	if (c == 0 && *b && (*b)->next)
		write (1, "rb\n", 3);
}

void	rr(t_list **a, t_list **b, int c)
{
	ra(a, 1);
	rb(b, 1);
	if (c == 0 && *a && (*a)->next && *b && (*b)->next)
		write (1, "rr\n", 3);
}

void	rrr(t_list **a, t_list **b, int c)
{
	rra(a, 1);
	rrb(b, 1);
	if (c == 0 && *a && (*a)->next && *b && (*b)->next)
		write (1, "rrr\n", 4);
}