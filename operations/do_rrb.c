/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherkao <zcherkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:20:25 by yachehbo          #+#    #+#             */
/*   Updated: 2022/03/14 17:06:35 by zcherkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"
#include <unistd.h>

int	do_rrb(t_list **stack_b, int k)
{
	if (ft_lstsize(*stack_b) >= 2)
	{
		reverse_rotate (stack_b);
		if (k == 0)
			write (1, "rrb\n", 4);
	}
	return (0);
}
