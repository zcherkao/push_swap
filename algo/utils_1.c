/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherkao <zcherkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 16:56:11 by zcherkao          #+#    #+#             */
/*   Updated: 2022/03/14 22:24:29 by zcherkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"
#include <unistd.h>

void	move_to_top(int pos, t_list **stack_a)
{
	while (pos < 0)
	{
		do_rra (stack_a, 0);
		pos++;
	}
	while (pos > 0)
	{
		do_ra (stack_a, 0);
		pos--;
	}	
}

void	assing_index(t_list **stack_a)
{
	t_list	*temp;
	int		i;

	temp = *stack_a;
	i = 0;
	while (temp)
	{
		temp->current_pos = i++;
		temp = temp->next;
	}
}
