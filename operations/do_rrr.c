/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherkao <zcherkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:20:28 by yachehbo          #+#    #+#             */
/*   Updated: 2022/03/14 17:02:23 by zcherkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"
#include <unistd.h>

int	do_rrr(t_list **stack_a, t_list **stack_b, int k)
{
	if (ft_lstsize(*stack_a) >= 2 && ft_lstsize(*stack_b) >= 2)
	{
		reverse_rotate (stack_a);
		reverse_rotate (stack_b);
		if (k == 0)
			write (1, "rrr\n", 4);
	}
	return (0);
}
