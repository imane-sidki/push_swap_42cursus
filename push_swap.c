/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidki <isidki@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 23:39:35 by isidki            #+#    #+#             */
/*   Updated: 2023/02/11 05:05:07 by isidki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_leaks()
{
	system("leaks push_swap");
}

int	main(int ac, char **av)
{
	atexit(ft_leaks);
	t_list	*stack_a;
	int		i;

	i = 0;
	if (ac == 1)
		exit(0);
	if (ac >= 2)
	{
		stack_a = parsing(ac, av);
		if (ft_sorted(stack_a))
			free_and_exit(stack_a);
		if (ft_lstsize(stack_a) <= 3)
			sort3(stack_a);
		else if (ft_lstsize(stack_a) <= 5)
			sort5(stack_a);
		else
			LIS_sort(stack_a);
		show_elm(stack_a);
	}
	return (0);
}