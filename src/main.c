/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 15:13:18 by zcanales          #+#    #+#             */
/*   Updated: 2021/10/06 11:55:53 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*head_a;
	t_list	*head_b;

	head_a = NULL;
	head_b = NULL;
	if (argc >= 2)
	{
		ft_create_list(argc, argv, &head_a);
		if (ft_lstsize(head_a) == 3 || ft_lstsize(head_a) == 2)
			ft_sort_3nb(&head_a);
		else
			ft_sort_main(&head_a, &head_b);
		free_linked_list(head_a);
		free_linked_list(head_b);
	}
	return (0);
}
