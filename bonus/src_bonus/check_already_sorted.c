/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_already_sorted.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 16:22:58 by zcanales          #+#    #+#             */
/*   Updated: 2021/10/06 11:07:21 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	ft_check_list_sort(t_list **head_x, char x)
{
	t_list	*tmp1;
	t_list	*tmp2;
	int		neg;

	if (!(*head_x))
		return (0);
	tmp1 = *head_x;
	tmp2 = tmp1->next;
	neg = 1;
	if (x == 'a')
		neg *= (-1);
	while (tmp1)
	{
		tmp2 = tmp1->next;
		while (tmp2)
		{
			if ((int)tmp1->content * (neg) < (int)tmp2->content *(neg))
				return (0);
			tmp2 = tmp2->next;
		}
		tmp1 = tmp1->next;
	}
	return (1);
}
