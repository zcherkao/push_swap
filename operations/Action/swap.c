/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherkao <zcherkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:13:34 by yachehbo          #+#    #+#             */
/*   Updated: 2022/03/14 20:29:08 by zcherkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../../push_swap.h"

int	swap(t_list **lst)
{
	int	temp;
	int	tow;

	if ((*lst)->next)
	{
		temp = (*lst)->content;
		tow = (*lst)->next->content;
		(*lst)->content = tow;
		(*lst)->next->content = temp;
	}
	else
		return (0);
	return (1);
}
