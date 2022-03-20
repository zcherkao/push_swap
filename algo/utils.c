/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherkao <zcherkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 16:57:45 by zcherkao          #+#    #+#             */
/*   Updated: 2022/03/14 22:24:23 by zcherkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_arr(int *a, int *b)
{
	int	t;

	t = *a;
	*a = *b;
	*b = t;
}

int	count_element(t_list **stack_a)
{
	t_list	*temp;
	int		size;

	if (!stack_a || !*stack_a)
		return (0);
	size = 0;
	temp = *stack_a;
	while (temp)
	{
		size += 1;
		temp = temp->next;
	}
	return (size);
}

void	full_it(int *array, t_list **stack_a)
{
	t_list	*temp;

	temp = *stack_a;
	while (temp)
	{
		*array = temp->content;
		temp = temp->next;
		array++;
	}
}

void	sort_array(int *array, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (array[i] > array[j])
				swap_arr (&array[i], &array[j]);
			j++;
		}
		i++;
	}
}

void	assing_sorted_index(t_list **stack_a, int *array)
{
	t_list	*temp;
	int		i;

	temp = *stack_a;
	while (temp)
	{
		i = 0;
		while (temp->content != array[i])
			i++;
		temp->index_sorted = i;
		i = 0;
		temp = temp->next;
	}
}
