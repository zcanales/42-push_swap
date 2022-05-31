/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 10:30:34 by zcanales          #+#    #+#             */
/*   Updated: 2021/10/05 16:04:35 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ft_sort_a(t_list **head_a, t_list **head_b, int first)
{
	t_list	*tmp;

	if (first)
		ft_create_frist_group(head_a, ft_lstsize(*head_a));
	while (ft_lstsize_group(head_a) > 2 && !(ft_check_list_sort(head_a, 'a')))
		ft_push_to_a(head_a, head_b, first);
	tmp = *head_a;
	if (tmp->group <= 2)
		ft_sort_2nbr_x(head_a, head_b);
	if (first)
		ft_create_frist_group(head_a, 0);
	if (!first && ft_lstsize_group(head_b))
		ft_sort_b(head_a, head_b);
}

void	ft_sort_b(t_list **head_a, t_list **head_b)
{
	t_list	*tmp_b;

	tmp_b = *head_b;
	while (ft_lstsize_group(head_a) == ft_lstsize(*head_a)
		&& ft_lstsize(*head_b))
	{
		ft_push_b_to_a(head_a, head_b);
		if (tmp_b->group <= 2)
			ft_sort_2nbr_x(head_a, head_b);
	}
	if (ft_check_list_sort(head_a, 'a'))
		ft_create_frist_group(head_a, 0);
	if (ft_lstsize_group(head_a) != ft_lstsize(*head_a) || ft_lstsize(*head_b))
		ft_sort_a(head_a, head_b, 0);
}

void	ft_sort_main(t_list **head_a, t_list **head_b)
{
	int	sort;

	sort = 0;
	ft_sort_a(head_a, head_b, 1);
	ft_sort_b(head_a, head_b);
}
