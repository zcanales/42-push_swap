/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 15:13:18 by zcanales          #+#    #+#             */
/*   Updated: 2021/10/06 12:15:21 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap_bonus.h"

int	main(int argc, char **argv)
{
	t_list	*head_a;
	t_list	*head_b;

	head_a = NULL;
	head_b = NULL;
	if (argc > 2)
	{
		ft_create_list(argc, argv, &head_a);
		ft_take_instruction(&head_a, &head_b);
		free_linked_list(head_a);
		free_linked_list(head_b);
	}
	return (0);
}
