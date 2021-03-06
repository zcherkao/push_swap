/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_two.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherkao <zcherkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:00:44 by zcherkao          #+#    #+#             */
/*   Updated: 2022/03/14 22:05:18 by zcherkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	sort_two(t_list **stack)
{
	if (!stack_a_is_sorted(stack))
		do_sa (stack, 0);
	return (0);
}
