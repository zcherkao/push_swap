/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_ss.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherkao <zcherkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:20:37 by yachehbo          #+#    #+#             */
/*   Updated: 2022/03/14 17:07:25 by zcherkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"
#include <unistd.h>

int	do_ss(t_list **stack_a, t_list **stack_b, int k)
{
	if (ft_lstsize (*stack_a) >= 2 && ft_lstsize (*stack_b) >= 2)
	{
		swap (stack_a);
		swap (stack_b);
		if (k == 0)
			write (1, "ss\n", 3);
	}
	return (0);
}
