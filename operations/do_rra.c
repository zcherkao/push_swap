/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherkao <zcherkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:20:22 by yachehbo          #+#    #+#             */
/*   Updated: 2022/03/14 17:03:13 by zcherkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"
#include <unistd.h>

int	do_rra(t_list **stack_a, int k)
{
	if (ft_lstsize(*stack_a) >= 2)
	{
		reverse_rotate (stack_a);
		if (k == 0)
			write (1, "rra\n", 4);
	}
	return (0);
}
