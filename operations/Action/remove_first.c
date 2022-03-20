/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_first.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherkao <zcherkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:12:10 by yachehbo          #+#    #+#             */
/*   Updated: 2022/03/14 20:26:45 by zcherkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	remove_first(t_list **lst)
{
	t_list	*temp;

	if (!*lst)
		return (0);
	temp = *lst;
	*lst = temp -> next;
	free (temp);
	return (1);
}
