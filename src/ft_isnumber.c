/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnumber.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherkao <zcherkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 17:06:45 by yachehbo          #+#    #+#             */
/*   Updated: 2022/03/19 18:06:14 by zcherkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_isnumber(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '-' || str[0] == '+')
		i++;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

void	ft_leak(t_list **stack_a, t_list **stack_b)
{
	t_list	*fr;

	fr = *stack_a;
	while (fr)
	{
		*stack_a = fr->next;
		free (fr);
		fr = *stack_a;
	}
	free(stack_a);
	fr = *stack_b;
	while (fr)
	{
		*stack_b = fr->next;
		free (fr);
		fr = *stack_b;
	}
	free (stack_b);
}

int	count_space(char *arg)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (arg[i])
	{
		if (arg[i] == 32)
			j++;
		i++;
	}
	return (j);
}

int	check_args(char **args)
{
	int	i;

	i = 1;
	while (args[i])
	{
		if ((int) ft_strlen(args[i]) == count_space(args[i]))
			return (1);
		i++;
	}
	return (0);
}
