/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 17:11:39 by zcanales          #+#    #+#             */
/*   Updated: 2021/10/06 11:42:16 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ft_reverse_a(t_list **head_a, int check)
{
	t_list	*tmp;
	t_list	*tail;

	if (!(*head_a))
		return ;
	tail = *head_a;
	tmp = *head_a;
	if (!tmp->next)
		return ;
	tail = tail->next;
	while (tail->next)
	{
		tmp = tmp->next;
		tail = tail->next;
	}
	ft_lstadd_front(head_a, tail);
	tmp->next = NULL;
	write(1, "rra\n", 4);
}

void	ft_reverse_b(t_list **head_b, int check)
{
	t_list	*tmp;
	t_list	*tail;

	if (!(*head_b))
		return ;
	tail = *head_b;
	if (!tail->next)
		return ;
	tail = tail->next;
	tmp = *head_b;
	while (tail->next)
	{
		tmp = tmp->next;
		tail = tail->next;
	}
	ft_lstadd_front(head_b, tail);
	tmp->next = NULL;
	write(1, "rrb\n", 4);
}

void	ft_reverse_ab(t_list **head_a, t_list **head_b)
{
	if (!(*head_a) || !(*head_b))
		return ;
	ft_reverse_a(head_a, 1);
	ft_reverse_b(head_b, 1);
	write(1, "rrr\n", 4);
}
