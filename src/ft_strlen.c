/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherkao <zcherkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 17:05:12 by yachehbo          #+#    #+#             */
/*   Updated: 2022/03/19 18:27:58 by zcherkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

size_t	ft_strlen(const char *s)
{
	unsigned int	i;

	i = 0;
	if (!s[i])
		return (0);
	while (s[i])
		i++;
	return (i);
}

char	*ft_strjoin_2(char *buffers, char *buff, char c)
{
	int		i;
	int		j;
	char	*new;

	if (!buffers)
	{
		buffers = (char *)malloc(sizeof(char));
		buffers[0] = '\0';
	}
	new = (char *)malloc(sizeof(char) * (ft_strlen(buffers)
				+ ft_strlen(buff) + 2));
	if (new == 0)
		return (0);
	i = -1;
	j = 0;
	while (buffers[++i])
		new[i] = buffers[i];
	new[i++] = c;
	while (buff[j])
		new[i++] = buff[j++];
	new[i] = '\0';
	free (buffers);
	return (new);
}

void	ft_joinargs(char **str, char **av)
{
	int	i;

	*str = NULL;
	i = 1;
	while (av[i])
	{
		*str = ft_strjoin_2 (*str, av[i], ' ');
		i++;
	}
}

t_list	**ft_leak_3(char **av)
{
	char	**spl;
	int		i;
	t_list	**stack_a;
	t_list	**stack_b;

	spl = NULL;
	i = 0;
	stack_a = malloc(sizeof(t_list *));
	if (!stack_a)
		return (0);
	stack_b = malloc(sizeof(t_list *));
	if (!stack_b)
		return (0);
	*stack_a = NULL;
	*stack_b = NULL;
	if (check_args(av) == 1)
	{
		write (2, "ERROR\n", 6);
		exit(1);
	}
	return (stack_b);
}
