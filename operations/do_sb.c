/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherkao <zcherkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:20:34 by yachehbo          #+#    #+#             */
/*   Updated: 2022/03/14 17:01:42 by zcherkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"
#include <unistd.h>

int	do_sb(t_list **stack_b, int k)
{
	if (ft_lstsize(*stack_b) >= 2)
	{
		swap (stack_b);
		if (k == 0)
			write (1, "sb\n", 3);
	}
	return (0);
}
