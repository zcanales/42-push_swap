/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 14:38:17 by zcanales          #+#    #+#             */
/*   Updated: 2021/10/04 09:51:45 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	free_double_pointer(char **str)
{
	int	i;

	i = -1;
	while (str[++i])
		free(str[i]);
	free(str);
}

void	free_linked_list(t_list *head_x)
{
	t_list	*tmp;

	while (head_x != NULL)
	{
		tmp = head_x;
		head_x = head_x->next;
		free(tmp);
	}
}
