/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 15:47:06 by zcanales          #+#    #+#             */
/*   Updated: 2021/10/06 11:44:41 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../Libft/libft.h"
# include <unistd.h>
# include <stdlib.h>

/////////BEFORE_SORTING//////////
///////////CREATE_LIST///////////
void	ft_convert_to_list(size_t *str_new, t_list **head_a, int len);
void	ft_convert_to_nbr(char **str, t_list **head_a, int free);
void	ft_create_list(int argc, char **argv, t_list **head_a);
////////////COMANDS///////////////
void	ft_swap_a(t_list **head_a, int check);
void	ft_swap_b(t_list **head_b, int check);
void	ft_swap_ab(t_list **head_a, t_list **head_b);
void	ft_push_a(t_list **head_a, t_list **head_b);
void	ft_push_b(t_list **head_a, t_list **head_b);
void	ft_rotate_a(t_list **head_a, int check);
void	ft_rotate_b(t_list **head_b, int check);
void	ft_rotate_ab(t_list **head_a, t_list **head_b);
void	ft_reverse_a(t_list **head_a, int check);
void	ft_reverse_b(t_list **head_b, int check);
void	ft_reverse_ab(t_list **head_a, t_list **head_b);
//////////////////ERROR//////////////
void	ft_is_error(char **str, int free);
void	ft_is_error_int(size_t *str);
void	ft_check_digit(char **str, int free);
void	ft_check_repeat(size_t *str, int len);
void	free_double_pointer(char **str);
void	ft_check_is_sort(size_t *str, int len);
/////////////////LIBRARY///////////////
void	ft_create_frist_group(t_list **head_a, int group);
int		ft_lstsize_group(t_list **head_x);
int		ft_count_group(t_list **head_a);
void	ft_push_a_and_assign_group(int new_group, int *j,
			t_list **head_a, t_list **head_b);
void	ft_push_b_and_assign_group(int new_group, int *j,
			t_list **head_a, t_list **head_b);
/////////////////////FREE//////////////
void	free_double_pointer(char **str);
void	free_linked_list(t_list *head_x);
//////////////SORTING//////////////////
////////////////FIND_PIVOT/////////////
int		ft_check(int *array_int, t_list *tmp, int i);
t_list	*ft_smallest_nbr(int *array_int, t_list **head_a, int number);
int		found_pivot(t_list **head_a, int group, int neg);
////////////////MAIN_SORT//////////////
void	ft_sort_main(t_list **head, t_list **head_b);
void	ft_sort_b(t_list **head_a, t_list **head_b);
void	ft_sort_a(t_list **head_a, t_list **head_b, int first);
/////////////////PUSH_A_TO_B///////////
void	ft_push_to_a(t_list **head_a, t_list **head_b, int first);
////////////SORT == 2NBR////////////////
void	ft_create_frist_group(t_list **head_a, int group);
void	ft_sort_2nbr_x(t_list **head_a, t_list **head_b);
//////////////CHECK_ALREADY_SORT////////
int		ft_check_list_sort(t_list **head_x, char x);
void	ft_push_nbr_b(t_list **head_a, t_list **head_b);
////////////////PUSH_B_TO_A/////////////
void	ft_push_b_to_a(t_list **head_a, t_list **head_b);
///////////////3NBR/////////////////////
void	ft_sort_3nb(t_list **head_a);
#endif
