/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_and_swap_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 17:16:25 by zcanales          #+#    #+#             */
/*   Updated: 2021/10/06 10:53:49 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap_bonus.h"

void	ft_swap_a_bonus(t_list **head_a)
{
	t_list	*tmp1;
	t_list	*tmp2;

	if (!(*head_a))
		return ;
	tmp1 = *head_a;
	tmp2 = tmp1->next;
	if ((!tmp1->content && !tmp1->next))
		return ;
	tmp1->next = tmp2->next;
	tmp2->next = tmp1;
	*head_a = tmp2;
}

void	ft_swap_b_bonus(t_list **head_b)
{
	t_list	*tmp1;
	t_list	*tmp2;

	tmp1 = *head_b;
	if (!tmp1)
		return ;
	tmp2 = tmp1->next;
	if ((!tmp1->content && !tmp1->next) || (!tmp2->content && !tmp2->next))
		return ;
	tmp1->next = tmp2->next;
	tmp2->next = tmp1;
	*head_b = tmp2;
}

void	ft_swap_ab_bonus(t_list **head_a, t_list **head_b)
{
	if (!(*head_b) ||!(*head_a))
		return ;
	ft_swap_a_bonus(head_a);
	ft_swap_b_bonus(head_b);
}

void	ft_push_a_bonus(t_list **head_a, t_list **head_b)
{
	t_list	*tmp1;
	t_list	*tmp2;

	if (!(*head_b))
		return ;
	tmp1 = *head_b;
	tmp2 = *head_a;
	if (!tmp1->content && !tmp1->next && !ft_lstsize(tmp1))
		return ;
	*head_b = tmp1->next;
	tmp1->next = tmp2;
	*head_a = tmp1;
}

void	ft_push_b_bonus(t_list **head_a, t_list **head_b)
{
	t_list	*tmp1;
	t_list	*tmp2;

	if (!(*head_a))
		return ;
	tmp1 = *head_a;
	tmp2 = *head_b;
	if (!tmp1->content && !tmp1->next)
		return ;
	*head_a = tmp1->next;
	tmp1->next = tmp2;
	*head_b = tmp1;
}
