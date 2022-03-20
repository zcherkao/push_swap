/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherkao <zcherkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 18:46:33 by zcherkao          #+#    #+#             */
/*   Updated: 2022/03/20 18:41:08 by zcherkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list(t_list *lst)
{
	t_list	*tmp;

	tmp = lst;
	while (tmp)
	{
		printf("%d\n", tmp->content);
		tmp = tmp->next;
	}
}

void	instruction(t_list **stack_a, t_list **stack_b, char *str)
{	
	if (!ft_strcmp("rrb\n", str))
		do_rrb (stack_b, 1);
	else if (!ft_strcmp("rrr\n", str))
		do_rrr (stack_a, stack_b, 1);
	else if (!ft_strcmp("sa\n", str))
		do_sa (stack_a, 1);
	else if (!ft_strcmp("sb\n", str))
		do_sb (stack_a, 1);
	else if (!ft_strcmp("ss\n", str))
		do_ss (stack_a, stack_b, 1);
	else if (!ft_strcmp("pa\n", str))
		do_pa (stack_b, stack_a, 1);
	else if (!ft_strcmp("pb\n", str))
		do_pb (stack_a, stack_b, 1);
	else if (!ft_strcmp("ra\n", str))
		do_ra (stack_a, 1);
	else if (!ft_strcmp("rb\n", str))
		do_rb (stack_b, 1);
	else if (!ft_strcmp("rr\n", str))
		do_rr (stack_a, stack_b, 1);
	else if (!ft_strcmp("rra\n", str))
		do_rra (stack_a, 1);
}

void	checker(t_list **stack_a, t_list **stack_b)
{
	char	*str;

	str = get_next_line(0);
	while (str)
	{
		instruction (stack_a, stack_b, str);
		str = get_next_line(0);
	}
	if (stack_a_is_sorted(stack_a) && is_empty(stack_b))
		write (1, "ok\n", 3);
	else
		write (1, "ko\n", 3);
}

t_list	**fill_lst(int ac, char **av)
{
	t_list	**stack_a;
	int		i;

	stack_a = malloc(sizeof(t_list *));
	if (!stack_a)
		return (NULL);
	*stack_a = NULL;
	i = 0;
	while (i < ac)
	{
		if (ft_memcmp(av[i], "", ft_strlen(av[i])))
			ft_lstadd_back (stack_a, ft_lstnew(ft_atoi(av[i])));
		i++;
	}
	return (stack_a);
}

int	main( int ac, char **av)
{
	char	*str;
	t_list	**stack_a;
	t_list	**stack_b;
	char	**spl;
	int		i;

	if (ac < 2)
		return (0);
	stack_b = ft_leak_3(av);
	str = NULL;
	ft_joinargs(&str, av);
	spl = ft_split (str, ' ');
	i = 1;
	while (spl[i])
		i++;
	stack_a = fill_lst (i, spl);
	if (!check_error(i, spl))
	{
		write (2, "ERROR\n", 6);
		return (0);
	}
	checker (stack_a, stack_b);
	ft_leak(stack_a, stack_b);
	return (0);
}
