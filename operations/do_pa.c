/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherkao <zcherkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:16:11 by yachehbo          #+#    #+#             */
/*   Updated: 2022/03/14 17:06:04 by zcherkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"
#include <unistd.h>

int	do_pa(t_list **stack_b, t_list **stack_a, int k)
{
	if (ft_lstsize(*stack_b) != 0)
	{
		ft_lstadd_front (stack_a, ft_lstnew((*stack_b)->content));
		remove_first (stack_b);
		if (k == 0)
			write (1, "pa\n", 3);
	}
	return (0);
}
