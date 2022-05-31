/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_2nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 16:20:47 by zcanales          #+#    #+#             */
/*   Updated: 2021/10/04 15:39:15 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ft_push_2nbr_b(t_list **head_a, t_list **head_b)
{
	t_list	*tmp;
	int		group;
	int		j;

	if (!*head_b)
		return ;
	tmp = *head_b;
	group = tmp->group;
	j = 0;
	if (tmp && group <= 2 && ft_check_list_sort(head_a, 'a' ))
	{
		while (j < group)
		{
			tmp = *head_b;
			tmp->group = 0;
			ft_push_a(head_a, head_b);
			tmp = tmp->next;
			j++;
		}
	}
}

void	ft_sort_2nbr_a(t_list **head_a, int *check)
{
	t_list	*first;
	t_list	*tail;
	int		group;

	first = *head_a;
	group = first->group;
	if (group == 2)
	{
		tail = first->next;
		if ((int)tail->content < (int)first->content)
			*check = 1;
		ft_create_frist_group(head_a, 0);
	}
	else if (group == 1)
		ft_create_frist_group(head_a, 0);
}

void	ft_sort_2nbr_b(t_list **head_b, int *check)
{
	t_list	*first;
	t_list	*tail;
	int		group;

	if (!(*head_b))
		return ;
	first = *head_b;
	group = first->group;
	if (group == 2)
	{
		tail = first ->next;
		if ((int)tail->content > (int)first->content)
			*check = 1;
	}
}

void	ft_sort_2nbr_x(t_list **head_a, t_list **head_b)
{
	int	check_a;
	int	check_b;

	check_a = 0;
	check_b = 0;
	ft_sort_2nbr_b(head_b, &check_b);
	ft_sort_2nbr_a(head_a, &check_a);
	if (check_a && !check_b)
		ft_swap_a(head_a, 0);
	else if (!check_a && check_b)
		ft_swap_b(head_b, 0);
	else if (check_a && check_b)
		ft_swap_ab(head_a, head_b);
	ft_push_2nbr_b(head_a, head_b);
}
