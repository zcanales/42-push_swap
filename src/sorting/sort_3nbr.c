/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 11:36:45 by zcanales          #+#    #+#             */
/*   Updated: 2021/10/01 14:17:47 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	ft_found_min(t_list	*head_a)
{
	int		min;

	min = (int)head_a->content;
	while (head_a)
	{
		if ((int)head_a->content < min)
			min = (int)head_a->content;
		head_a = head_a->next;
	}
	return (min);
}

void	ft_sort_3nb(t_list **head_a)
{
	t_list	*tmp;
	t_list	*tail;
	int		pivot;
	int		min;

	ft_create_frist_group(head_a, 3);
	pivot = found_pivot(head_a, 3, 1);
	min = ft_found_min(*head_a);
	while (!ft_check_list_sort(head_a, 'a' ))
	{
		tmp = *head_a;
		tail = ft_lstlast(*head_a);
		if ((int)tmp->content == pivot && (int)tail->content > min)
			ft_rotate_a(head_a, 0);
		else if ((int)tail->content == pivot && (int)tmp->content == min)
			ft_reverse_a(head_a, 0);
		else if ((int)tmp->content != pivot && (int)tail->content == min)
			ft_reverse_a(head_a, 0);
		else
			ft_swap_a(head_a, 0);
	}
}
