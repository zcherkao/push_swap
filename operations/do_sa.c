/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherkao <zcherkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:20:31 by yachehbo          #+#    #+#             */
/*   Updated: 2022/03/14 17:02:02 by zcherkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"
#include <unistd.h>

int	do_sa(t_list **stack_a, int k)
{
	if (ft_lstsize(*stack_a) >= 2)
	{
		swap (stack_a);
		if (k == 0)
			write(1, "sa\n", 3);
	}
	return (0);
}
