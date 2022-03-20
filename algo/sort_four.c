/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherkao <zcherkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 16:28:12 by zcherkao          #+#    #+#             */
/*   Updated: 2022/03/14 22:01:18 by zcherkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_four(t_list **stack_a, t_list **stack_b)
{
	int	min;

	min = buttom_number (stack_a);
	assing_index(stack_a);
	move_to_top (get_index (min, stack_a), stack_a);
	do_pb (stack_a, stack_b, 0);
	sort_three (stack_a);
	do_pa (stack_b, stack_a, 0);
}
