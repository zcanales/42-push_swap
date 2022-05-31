/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 15:47:06 by zcanales          #+#    #+#             */
/*   Updated: 2021/10/06 12:20:06 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H
# include "../../Libft/libft.h"
# include "../src_bonus/get_next_line/get_next_line.h"
# include <unistd.h>
# include <stdlib.h>

///////////CREATE_LIST///////////
void	ft_convert_to_list(size_t *str_new, t_list **head_a, int len);
void	ft_convert_to_nbr(char **str, t_list **head_a, int free);
void	ft_create_list(int argc, char **argv, t_list **head_a);
////////////COMANDS///////////////
void	ft_swap_a_bonus(t_list **head_a);
void	ft_swap_b_bonus(t_list **head_b);
void	ft_swap_ab_bonus(t_list **head_a, t_list **head_b);
void	ft_push_a_bonus(t_list **head_a, t_list **head_b);
void	ft_push_b_bonus(t_list **head_a, t_list **head_b);
void	ft_rotate_a_bonus(t_list **head_a);
void	ft_rotate_b_bonus(t_list **head_b);
void	ft_rotate_ab_bonus(t_list **head_a, t_list **head_b);
void	ft_reverse_a_bonus(t_list **head_a);
void	ft_reverse_b_bonus(t_list **head_b);
void	ft_reverse_ab_bonus(t_list **head_a, t_list **head_b);
//////////////////ERROR//////////////
void	ft_is_error(char **str, int free);
void	ft_is_error_int(size_t *str);
void	ft_check_digit(char **str, int free);
void	ft_check_repeat(size_t *str, int len);
void	free_double_pointer(char **str);
void	ft_check_is_sort(size_t *str, int len);
/////////////////////FREE//////////////
void	free_double_pointer(char **str);
void	free_linked_list(t_list *head_x);
////////////////CHECK_SORTED/////////////
int		ft_check_list_sort(t_list **head_x, char x);
////////////////BONUS/////////////
void	ft_take_instruction(t_list **head_a, t_list **head_b);
///////////////GNL////////////////////
char	*get_next_line(int fd);
#endif
