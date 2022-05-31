/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   take_instruction.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 09:47:36 by zcanales          #+#    #+#             */
/*   Updated: 2021/10/06 11:11:30 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap_bonus.h"

int	sort_instruction(char *str, t_list **head_a, t_list **head_b)
{
	if (!(ft_strncmp(str, "sa\n", ft_strlen(str))))
		ft_swap_a_bonus(head_a);
	else if (!(ft_strncmp(str, "sb\n", ft_strlen(str))))
		ft_swap_b_bonus(head_b);
	else if (!(ft_strncmp(str, "ss\n", ft_strlen(str))))
		ft_swap_ab_bonus(head_a, head_b);
	else if (!(ft_strncmp(str, "pa\n", ft_strlen(str))))
		ft_push_a_bonus(head_a, head_b);
	else if (!(ft_strncmp(str, "pb\n", ft_strlen(str))))
		ft_push_b_bonus(head_a, head_b);
	else if (!(ft_strncmp(str, "ra\n", ft_strlen(str))))
		ft_rotate_a_bonus(head_a);
	else if (!(ft_strncmp(str, "rb\n", ft_strlen(str))))
		ft_rotate_b_bonus(head_b);
	else if (!(ft_strncmp(str, "rr\n", ft_strlen(str))))
		ft_rotate_ab_bonus(head_a, head_b);
	else if (!(ft_strncmp(str, "rra\n", ft_strlen(str))))
		ft_reverse_a_bonus(head_a);
	else if (!(ft_strncmp(str, "rrb\n", ft_strlen(str))))
		ft_reverse_b_bonus(head_b);
	else if (!(ft_strncmp(str, "rrr\n", ft_strlen(str))))
		ft_reverse_ab_bonus(head_a, head_b);
	else
		return (0);
	return (1);
}

void	ft_take_instruction(t_list **head_a, t_list **head_b)
{
	char	*intruc;

	while (1)
	{
		intruc = get_next_line(0);
		if (!ft_strncmp(intruc, "\n", ft_strlen(intruc)))
		{
			if (!ft_check_list_sort(head_a, 'a') || ft_lstsize(*head_b))
				write(1, "KO\n", 3);
			else
				write(1, "OK\n", 3);
			free (intruc);
			break ;
		}
		else if (!(sort_instruction(intruc, head_a, head_b)))
		{
			write(1, "Error\n", 6);
			free(intruc);
			break ;
		}
		free(intruc);
	}
}
