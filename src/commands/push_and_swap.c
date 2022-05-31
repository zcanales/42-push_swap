/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_and_swap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 17:16:25 by zcanales          #+#    #+#             */
/*   Updated: 2021/10/06 11:42:02 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ft_swap_a(t_list **head_a, int check)
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
	if (check == 0)
		write(1, "sa\n", 3);
}

void	ft_swap_b(t_list **head_b, int check)
{
	t_list	*tmp1;
	t_list	*tmp2;

	if (!(*head_b))
		return ;
	tmp1 = *head_b;
	tmp2 = tmp1->next;
	if ((!tmp1->content && !tmp1->next) || (!tmp2->content && !tmp2->next))
		return ;
	tmp1->next = tmp2->next;
	tmp2->next = tmp1;
	*head_b = tmp2;
	if (check == 0)
		write(1, "sb\n", 3);
}

void	ft_swap_ab(t_list **head_a, t_list **head_b)
{
	if (!(*head_a) || !(*head_b))
		return ;
	ft_swap_a(head_a, 1);
	ft_swap_b(head_b, 1);
	write(1, "ss\n", 3);
}

void	ft_push_a(t_list **head_a, t_list **head_b)
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
	write(1, "pa\n", 3);
}

void	ft_push_b(t_list **head_a, t_list **head_b)
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
	write(1, "pb\n", 3);
}
