/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_A_to_B_First.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 18:45:42 by zcanales          #+#    #+#             */
/*   Updated: 2021/10/05 16:06:04 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ft_push_to_a(t_list **head_a, t_list **head_b, int first)
{
	int		new_group;
	int		pivot;
	int		j;
	int		rotate;

	rotate = 0;
	new_group = ft_lstsize_group(head_a) - (ft_lstsize_group(head_a) / 2);
	j = 0;
	pivot = found_pivot(head_a, ft_lstsize_group(head_a), 1);
	while (j < new_group)
	{
		if ((int)(*head_a)->content < pivot)
			ft_push_b_and_assign_group(new_group, &j, head_a, head_b);
		else if ((int)ft_lstlast(*head_a)->content < pivot && first)
			ft_reverse_a(head_a, 0);
		else
		{
			ft_rotate_a(head_a, 0);
			rotate++;
		}
	}
	while (rotate-- && !first)
		ft_reverse_a(head_a, 0);
	ft_create_frist_group(head_a, ft_lstsize_group(head_a));
}
