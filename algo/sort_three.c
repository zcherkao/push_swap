/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherkao <zcherkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 19:00:35 by yachehbo          #+#    #+#             */
/*   Updated: 2022/03/14 22:22:55 by zcherkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	top_number(t_list **stack)
{
	t_list	*temp;
	int		top;

	temp = *stack;
	top = temp->content;
	while (temp)
	{
		if (top < temp->content)
			top = temp->content;
		temp = temp->next;
	}
	return (top);
}

int	buttom_number(t_list **stack)
{
	t_list	*temp;
	int		buttom;

	temp = *stack;
	buttom = temp->content;
	while (temp)
	{
		if (buttom > temp->content)
			buttom = temp->content;
		temp = temp->next;
	}
	return (buttom);
}

int	middle_number(t_list **stack)
{
	t_list	*temp;
	int		top;
	int		buttom;

	temp = *stack;
	top = top_number (stack);
	buttom = buttom_number (stack);
	while (temp)
	{
		if (temp->content != top && temp->content != buttom)
			return (temp->content);
		temp = temp->next;
	}
	return (0);
}

void	sort_three(t_list **stack)
{
	int	top;
	int	middle;
	int	buttom;

	top = top_number (stack);
	middle = middle_number (stack);
	buttom = buttom_number (stack);
	while (!stack_a_is_sorted(stack))
	{
		if ((*stack)->content == middle && (*stack)->next->content == buttom)
			do_sa (stack, 0);
		if ((*stack)->content == top && (*stack)->next->content == middle)
			do_sa (stack, 0);
		if ((*stack)->content == top && (*stack)->next->content == buttom)
			do_ra (stack, 0);
		if ((*stack)->content == buttom && (*stack)->next->content == top)
			do_sa (stack, 0);
		if ((*stack)->content == middle && (*stack)->next->content == top)
			do_rra (stack, 0);
	}
}
