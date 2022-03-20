/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherkao <zcherkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 17:32:56 by yachehbo          #+#    #+#             */
/*   Updated: 2022/03/20 18:18:54 by zcherkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_sort(int ac, char **av)
{
	int	i;

	i = 2;
	while (i < ac)
	{
		if (ft_atoi(av[i - 1]) < ft_atoi(av[i]))
			return (0);
		i++;
	}
	return (1);
}

int	stack_a_is_sorted(t_list **stack)
{
	t_list	*temp;

	temp = *stack;
	if(temp == NULL)
		return(0);
	while (temp -> next)
	{
		if (temp->content > temp->next->content)
			return (0);
		temp = temp->next;
	}
	return (1);
}
