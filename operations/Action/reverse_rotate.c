/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherkao <zcherkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:11:26 by yachehbo          #+#    #+#             */
/*   Updated: 2022/03/14 20:28:50 by zcherkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	reverse_rotate(t_list **lst)
{
	int	last;

	last = ft_lstlast (*lst)->content;
	ft_lstadd_front (lst, ft_lstnew(last));
	remove_last (lst);
	return (1);
}
