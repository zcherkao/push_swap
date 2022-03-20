/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherkao <zcherkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:37:31 by yachehbo          #+#    #+#             */
/*   Updated: 2022/03/19 15:55:20 by zcherkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <string.h>
// void	print_list(t_list *lst)
// {
// 	t_list *tmp;

// 	tmp = lst;
// 	while(tmp)
// 	{
// 		printf("%d\n", tmp->content);
//         tmp = tmp->next;
//     }
// }

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

void	sort(int ac, char **av)
{
	t_list	**stack_a;
	t_list	**stack_b;

	stack_a = fill_lst (ac, av);
	stack_b = malloc(sizeof(t_list *));
	if (!stack_b)
		exit (1);
	*stack_b = NULL;
	if (ac == 2)
		sort_two (stack_a);
	if (ac == 3)
		sort_three (stack_a);
	if (ac == 4)
		sort_four (stack_a, stack_b);
	if (ac == 5)
		sort_five (stack_a, stack_b);
	if (ac >= 6 && ac < 100)
		sort_all (stack_a, stack_b, 4);
	if (ac == 100)
		sort_all (stack_a, stack_b, 5);
	if (ac > 100)
		sort_all (stack_a, stack_b, 10);
	ft_leak(stack_a, stack_b);
}

void	ft_leak_2(char **spl, int i)
{
	i = 0;
	while (spl[i])
	{
		free (spl[i]);
		i++;
	}
	free (spl);
}

int	main(int ac, char **av)
{
	char	*str;
	char	**spl;
	int		i;

	if (ac < 2)
		return (0);
	if (check_args(av) == 1)
		return (write (2, "ERROR\n", 6), 1);
	ft_joinargs(&str, av);
	spl = ft_split (str, ' ');
	i = 1;
	while (spl[i])
		i++;
	if (!check_error(i, spl))
	{
		write (2, "ERROR\n", 6);
		return (0);
	}
	else
		sort (i, spl);
	ft_leak_2 (spl, i);
	free (str);
}
