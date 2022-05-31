/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 17:11:39 by zcanales          #+#    #+#             */
/*   Updated: 2021/10/06 10:48:09 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap_bonus.h"

void	ft_reverse_a_bonus(t_list **head_a)
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
}

void	ft_reverse_b_bonus(t_list **head_b)
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
}

void	ft_reverse_ab_bonus(t_list **head_a, t_list **head_b)
{
	if (!(*head_a) || !(*head_b))
		return ;
	ft_reverse_a_bonus(head_a);
	ft_reverse_b_bonus(head_b);
}
