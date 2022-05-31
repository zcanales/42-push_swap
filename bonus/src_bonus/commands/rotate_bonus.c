/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 17:12:28 by zcanales          #+#    #+#             */
/*   Updated: 2021/10/06 10:50:27 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap_bonus.h"

void	ft_rotate_a_bonus(t_list **head_a)
{
	t_list	*new_tail;
	t_list	*tmp;

	if (!(*head_a))
		return ;
	new_tail = *head_a;
	if (!new_tail->next)
		return ;
	tmp = new_tail->next;
	ft_lstadd_back(head_a, new_tail);
	*head_a = tmp;
}

void	ft_rotate_b_bonus(t_list **head_b)
{
	t_list	*new_tail;
	t_list	*tmp;

	if (!(*head_b))
		return ;
	new_tail = *head_b;
	if (!new_tail->next)
		return ;
	tmp = new_tail->next;
	ft_lstadd_back(head_b, new_tail);
	*head_b = tmp;
}

void	ft_rotate_ab_bonus(t_list **head_a, t_list **head_b)
{
	if (!(*head_a) || !(*head_b))
		return ;
	ft_rotate_a_bonus(head_a);
	ft_rotate_b_bonus(head_b);
}
