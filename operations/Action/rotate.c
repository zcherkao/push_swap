/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherkao <zcherkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:12:47 by yachehbo          #+#    #+#             */
/*   Updated: 2022/03/14 20:27:53 by zcherkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	rotate(t_list **lst)
{
	int	temp;

	temp = (*lst)->content;
	ft_lstadd_back (lst, ft_lstnew(temp));
	remove_first (lst);
	return (1);
}
