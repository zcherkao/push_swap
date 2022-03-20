/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherkao <zcherkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:20:07 by yachehbo          #+#    #+#             */
/*   Updated: 2022/03/14 17:06:11 by zcherkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"
#include <unistd.h>

int	do_pb(t_list **stack_a, t_list **stack_b, int k)
{
	if (ft_lstsize(*stack_a) != 0)
	{
		ft_lstadd_front (stack_b, ft_lstnew((*stack_a)->content));
		remove_first (stack_a);
		if (k == 0)
			write (1, "pb\n", 3);
	}
	return (0);
}
