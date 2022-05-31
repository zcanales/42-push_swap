/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pivot.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 09:42:07 by zcanales          #+#    #+#             */
/*   Updated: 2021/10/05 16:16:01 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	ft_check(int *array_int, t_list	*tmp, int i)
{
	int	j;

	j = 0;
	while (j < i)
	{
		if (array_int[j] == (int)tmp->content)
			return (0);
		j++;
	}
	return (1);
}

int	found_pivot2(t_list **head_a, int *array_int, int group, int neg)
{
	int		j;
	int		small_tmp;
	t_list	*tmp;

	j = 0;
	while (j < group / 2)
	{
		small_tmp = -2147483647 * neg ;
		tmp = *head_a;
		while (tmp && tmp->group == group)
		{
			if (((neg) * (int)tmp->content >= (neg) * small_tmp
					&& ft_check(array_int, tmp, j)))
				small_tmp = (int)tmp->content;
			array_int[j] = small_tmp;
			tmp = tmp->next;
		}
		j++;
	}
	return (small_tmp);
}

int	found_pivot(t_list **head_a, int group, int neg)
{
	int	*array_int;
	int	small_tmp;
	int	j;

	array_int = (int *)malloc(sizeof(int) * group / 2);
	if (!array_int)
		return (0);
	small_tmp = found_pivot2(head_a, array_int, group, neg);
	j = 0;
	free(array_int);
	return (small_tmp);
}
