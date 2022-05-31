/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comands.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 09:02:24 by zcanales          #+#    #+#             */
/*   Updated: 2021/10/01 17:18:58 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

/*/////////////////SWAP/////////////////////////
void	ft_swap_a(t_list **head_a, int check)
{
	t_list	*tmp1;
	t_list	*tmp2;

	tmp1 = *head_a;
	tmp2 = tmp1->next;
	if ((!tmp1->content && !tmp1->next) || (!tmp2->content && !tmp2->next))
		return ;
//	 if (!tmp1->content || !tmp2->content)
  //      return ;
	tmp1->next = tmp2->next;
	tmp2->next = tmp1;
	*head_a = tmp2;
	if (check == 0)
		write(1, "sa\n", 3);
}

void	ft_swap_b(t_list **head_b, int check)
{
    t_list  *tmp1;
    t_list  *tmp2;

    tmp1 = *head_b;
    tmp2 = tmp1->next;
	if ((!tmp1->content && !tmp1->next) || (!tmp2->content && !tmp2->next))
		return ;
    if (!tmp1->content || !tmp2->content)
        return ;
    tmp1->next = tmp2->next;
    tmp2->next = tmp1;
    *head_b = tmp2;
	if (check == 0)
    	write(1, "sb\n", 3);
}

void	ft_swap_ab(t_list **head_a, t_list	**head_b)
{   
	ft_swap_a(head_a, 1);
	ft_swap_b(head_b, 1);
	write(1, "ss\n", 3);
}

///////////////PUSH///////////////////////////
void    ft_push_a(t_list **head_a, t_list **head_b)
{
    t_list  *tmp1;
    t_list  *tmp2;

    tmp1 = *head_b;
    tmp2 = *head_a;
//	if (!tmp1->content)
	if (!tmp1->content && !tmp1->next)
        return;
    *head_b = tmp1->next;
    tmp1->next = tmp2;
    *head_a = tmp1;
    write(1, "pa\n", 3);
}
void	ft_push_b(t_list **head_a, t_list **head_b) //1b->1a
{
    t_list  *tmp1;
    t_list  *tmp2;

    tmp1 = *head_a;
    tmp2 = *head_b;
    if (!tmp1->content && !tmp1->next)
//	if (!tmp1->content)
	{
		printf("lista vacia\n");
		return ;
	}
	*head_a = tmp1->next;
	tmp1->next = tmp2;
	*head_b = tmp1;
   	write(1, "pb\n", 3);
} 

///////////////////////ROTATE/////////////////////////1->last
void    ft_rotate_a(t_list **head_a, int check)
{
    t_list  *new_tail;
    t_list *tmp;

    new_tail = *head_a;
    tmp = new_tail->next;
    ft_lstadd_back(head_a, new_tail);
    *head_a = tmp;
    if (!check)
        write(1, "ra\n", 3);
}

void    ft_rotate_b(t_list **head_b, int check)
{
    t_list  *new_tail;
    t_list *tmp;

    new_tail = *head_b;
    tmp = new_tail->next;
    ft_lstadd_back(head_b, new_tail);
    *head_b = tmp;
    if (!check)
        write(1, "rb\n", 3);
}

void    ft_rotate_ab(t_list **head_a, t_list  **head_b)
{
    ft_rotate_a(head_a, 1);
    ft_rotate_b(head_b, 1);
    write(1, "rr\n", 3);
}
///////////////////////REVERSE//////////////////////last->1
void    ft_reverse_a(t_list **head_a, int check)
{
	t_list	*tmp;
	t_list	*tail;

	tail = *head_a;
	tmp = *head_a;
	tail = tail->next;
	while (tail->next)
	{
		tmp = tmp->next;
		tail = tail->next;
	}
	ft_lstadd_front(head_a, tail);
	tmp->next = NULL;
	write(1, "rra\n", 4);
}
void    ft_reverse_b(t_list **head_b, int check)
{
    t_list  *tmp;
    t_list  *tail;

    tail = *head_b;
    tail = tail->next;
    tmp = *head_b;
    while (tail->next)
    {
        tmp = tmp->next;
        tail = tail->next;
    }
	ft_lstadd_front(head_b, tail);
	tmp->next = NULL;
	write(1, "rrb\n", 4);
}

void	ft_reverse_ab(t_list **head_a, t_list  **head_b)
{
	ft_reverse_a(head_a, 1);
	ft_reverse_b(head_b, 1);
	write(1, "rrr\n", 4);
}
*/
