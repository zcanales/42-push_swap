/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_B_to_A.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 16:34:40 by zcanales          #+#    #+#             */
/*   Updated: 2021/10/04 13:46:32 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ft_push_b_to_a(t_list **head_a, t_list **head_b)
{
	int		j;
	int		new_group;
	t_list	*tmp;
	int		rotate;
	int		pivot;

	rotate = 0;
	tmp = *head_b;
	new_group = tmp->group - tmp->group / 2;
	pivot = found_pivot(head_b, tmp->group, -1);
	j = 0;
	ft_create_frist_group(head_b, tmp->group / 2);
	while (j < new_group)
	{
		tmp = *head_b;
		if ((int)tmp->content > pivot)
			ft_push_a_and_assign_group(new_group, &j, head_a, head_b);
		else
		{
			ft_rotate_b(head_b, 0);
			rotate++;
		}
	}
	while (rotate-- && ft_lstsize(*head_b) > 1)
		ft_reverse_b(head_b, 0);
}
