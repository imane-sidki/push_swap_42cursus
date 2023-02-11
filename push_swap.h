/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidki <isidki@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 23:39:38 by isidki            #+#    #+#             */
/*   Updated: 2023/02/11 03:59:12 by isidki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdbool.h>

typedef struct s_list
{
	int				index;
	int				content;
	struct s_list	*next;
}	t_list;

/**********************************************/
/****************operations********************/

void		sa(t_list **a, int c);
void		sb(t_list **b, int c);
void		ss(t_list **a, t_list **b, int c);
void		ra(t_list **a, int c);
void		rb(t_list **b, int c);
void		rra(t_list **a, int c);
void		rrb(t_list **b, int c);
void		rrr(t_list **a, t_list **b, int c);
void		rr(t_list **a, t_list **b, int c);
void		pa(t_list **a, t_list **b, int c);
void		pb(t_list **a, t_list **b, int c);

/***********************************************/
/*******************Utils***********************/

char		*ft_strjoin(int size, char **strs, char sep);
char		**ft_split(char *s, char c);
int			ft_atoi(char *str);
int			ft_strlen(char *str);

/*************************************************/
/*******************linked*list*operations**********/

void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstadd_front(t_list **lst, t_list *new);
t_list		*ft_lstnew(int content);
void		ft_lstclear(t_list **lst);
int			ft_lstsize(t_list *lst);

/*************************************************/
/*******************parsing***********************/

t_list		*parsing(int ac, char **av);
void		check_digit(char *str);
void		msg_err(void);
t_list		*stock_in_stack(char **array);
void		show_elm(t_list *a); //to remove

/*************************************************/
/*******************freeing***********************/

void		free_all(char **str);
void		free_and_exit(t_list *a);

/*************************************************/
/*******************sorting***********************/

bool		ft_sorted(t_list *a);
void		sort3(t_list *a);
void		sort5(t_list *a);
void		LIS_sort(t_list *a);

#endif