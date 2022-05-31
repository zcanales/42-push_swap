/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 17:12:28 by zcanales          #+#    #+#             */
/*   Updated: 2021/10/06 11:50:47 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ft_rotate_a(t_list **head_a, int check)
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
	if (!check)
		write(1, "ra\n", 3);
}

void	ft_rotate_b(t_list **head_b, int check)
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
	if (!check)
		write(1, "rb\n", 3);
}

void	ft_rotate_ab(t_list **head_a, t_list **head_b)
{
	if (!(*head_a) || !(*head_b))
		return ;
	ft_rotate_a(head_a, 1);
	ft_rotate_b(head_b, 1);
	write(1, "rr\n", 3);
}
