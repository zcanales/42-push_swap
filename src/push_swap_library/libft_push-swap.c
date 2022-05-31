/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_push-swap.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 11:41:37 by zcanales          #+#    #+#             */
/*   Updated: 2021/10/04 13:59:31 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	ft_lstsize_group(t_list **head_x)
{
	t_list	*tmp;
	int		group;
	int		count;

	count = 0;
	tmp = *head_x;
	if (tmp)
		group = tmp->group;
	while (tmp && tmp->group == group)
	{
		tmp = tmp->next;
		count++;
	}
	return (count);
}

int	ft_count_group(t_list **head_a)
{
	t_list	*tmp;

	tmp = *head_a;
	if (tmp)
		return (tmp->group);
	return (0);
}

void	ft_create_frist_group(t_list **head_a, int group)
{
	t_list	*tmp;
	int		old_group;

	tmp = *head_a;
	if (tmp)
		old_group = tmp->group;
	while (tmp && tmp->group == old_group)
	{
		tmp->group = group;
		tmp = tmp->next;
	}
}

void	ft_push_a_and_assign_group(int new_group, int *j,
			t_list **head_a, t_list **head_b)
{
	t_list	*tmp;

	tmp = *head_b;
	tmp->group = new_group;
	ft_push_a(head_a, head_b);
	*j = *j + 1;
}

void	ft_push_b_and_assign_group(int new_group, int *j,
			t_list **head_a, t_list **head_b)
{
	t_list	*tmp;

	tmp = *head_a;
	tmp->group = new_group;
	ft_push_b(head_a, head_b);
	*j = *j + 1;
}
