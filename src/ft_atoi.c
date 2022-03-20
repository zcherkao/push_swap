/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherkao <zcherkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:58:18 by yachehbo          #+#    #+#             */
/*   Updated: 2022/03/18 17:47:54 by zcherkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

long	ft_atoi(const char *str)
{
	int		b;
	long	res;
	int		i;

	i = 0;
	b = 1;
	res = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			b *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * b);
}

int	ft_strlen_1(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0') && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	ft_spl(char *str, char **av)
{
	int		i;
	char	**spl;

	i = 1;
	while (av[i])
	{
		str = ft_strjoin_2 (str, av[i], ' ');
		i++;
	}
	spl = ft_split (str, ' ');
	i = 1;
	while (spl[i])
		i++;
	if (!check_error(i, spl))
	{
		write (2, "ERROR\n", 6);
		return (0);
	}
	return (0);
}
