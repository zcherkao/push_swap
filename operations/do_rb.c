/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherkao <zcherkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:20:15 by yachehbo          #+#    #+#             */
/*   Updated: 2022/03/14 17:04:01 by zcherkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"
#include <unistd.h>

int	do_rb(t_list **stack_b, int k)
{
	if (ft_lstsize(*stack_b) >= 2)
	{
		rotate (stack_b);
		if (k == 0)
			write (1, "rb\n", 3);
	}
	return (0);
}
