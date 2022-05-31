/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 12:45:28 by zcanales          #+#    #+#             */
/*   Updated: 2021/10/06 11:55:38 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ft_convert_to_list(size_t *str_new, t_list **head_a, int len)
{
	int		i;
	t_list	*temp;

	i = 0;
	while (len--)
	{
		temp = ft_lstnew((void *)str_new[i++]);
		ft_lstadd_back(head_a, temp);
		temp = temp->next;
	}
	free(str_new);
}

void	ft_convert_to_nbr(char **str, t_list **head_a, int free)
{
	int		j;
	int		len;
	size_t	*str_new;

	j = -1;
	len = 0;
	ft_check_digit(str, free);
	while (str[len])
		len++;
	str_new = (size_t *)malloc(sizeof(size_t) * len);
	if (!str_new)
		return ;
	while (str[++j])
		str_new[j] = ft_atoi(&str[j][0]);
	ft_check_repeat(str_new, len);
	ft_check_is_sort(str_new, len);
	ft_convert_to_list(str_new, head_a, len);
}

void	ft_create_list(int argc, char **argv, t_list **head_a)
{
	char	**str;

	if (argc == 2)
	{
		str = ft_split((const char *)argv[1], ' ');
		ft_convert_to_nbr(str, head_a, 1);
		free_double_pointer(str);
	}
	else
		ft_convert_to_nbr(&argv[1], head_a, 0);
}
