/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 12:26:28 by zcanales          #+#    #+#             */
/*   Updated: 2021/10/06 12:02:31 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap_bonus.h"

void	ft_is_error(char **str, int free)
{
	write(1, "Error\n", 6);
	if (free)
		free_double_pointer(str);
	exit(1);
}

void	ft_is_error_int(size_t	*str)
{
	write(1, "Error\n", 6);
	free(str);
	exit(1);
}

void	ft_check_digit(char **str, int free)
{
	int	i;
	int	j;

	i = -1;
	j = 0;
	while (str[++i])
	{
		while (str[i][j])
		{
			if (!ft_isdigit(str[i][j]) && str[i][j] != '-' )
				ft_is_error(str, free);
			j++;
		}
		j = 0;
	}
}

void	ft_check_repeat(size_t *str, int len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if ((int)str[i] == (int)str[j])
				ft_is_error_int(str);
			j++;
		}
		i++;
	}
}

void	ft_check_is_sort(size_t *str, int len)
{
	int	i;
	int	j;

	j = 0;
	while (j < len)
	{
		i = j + 1;
		while (i < len)
		{
			if ((int)str[i] < (int)str[j])
				return ;
			i++;
		}
		j++;
	}
	exit(1);
}
