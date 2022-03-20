/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherkao <zcherkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 17:35:28 by yachehbo          #+#    #+#             */
/*   Updated: 2022/03/19 18:00:04 by zcherkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_error(int ac, char **av)
{	
	if (!check_double(ac, av) || !check_ifnumber(ac, av)
		|| !check_iflong (ac, av))
		return (0);
	return (1);
}
