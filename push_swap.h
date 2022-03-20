/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherkao <zcherkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 14:59:34 by yachehbo          #+#    #+#             */
/*   Updated: 2022/03/20 18:41:14 by zcherkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stddef.h>
# include "get_next_line/get_next_line.h"

typedef struct s_list
{
	int				content;
	int				index_sorted;
	int				current_pos;
	struct s_list	*next;
}			t_list;

void			ft_lstadd_back(t_list **lst, t_list *new);
t_list			*ft_lstnew(int content);
void			ft_lstadd_front(t_list **lst, t_list *new);
int				ft_lstsize(t_list *lst);
t_list			*ft_lstlast(t_list *lst);

long			ft_atoi(const char *str);
int				ft_strcmp(char *s1, char *s2);
int				ft_isnumber(char *str);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
size_t			ft_strlen(const char *s);
size_t			ft_strlcpy(char *dest, const char *source, size_t destsize);
char			**ft_split(char const *s, char c);
int				return_lenght(int size, char **strs, int size_sep);
char			*ft_strcpy(char *dest, char *src);
char			*ft_strjoin_2(char *buffers, char *buff, char c);
int				do_pa(t_list **stack_b, t_list **stack_a, int k);
int				do_pb(t_list **stack_a, t_list **stack_b, int k);
int				do_rra(t_list **stack_a, int k);
int				do_rrb(t_list **stack_b, int k);
int				do_rrr(t_list **stack_a, t_list **stack_b, int k);
int				do_ra(t_list **stack_a, int k);
int				do_rb(t_list **stack_b, int k);
int				do_rr(t_list **stack_a, t_list **stack_b, int k);
int				do_sa(t_list **stack_a, int k);
int				do_sb(t_list **stack_b, int k);
int				do_ss(t_list **stack_a, t_list **stack_b, int k);
void			checker(t_list **stack_a, t_list **stack_b);
void			checker2(t_list **stack_a, t_list **stack_b);
void			instruction(t_list **stack_a, t_list **stack_b, char *str);
t_list			*ft_pre_last(t_list **lst);
int				remove_first(t_list **lst);
void			remove_last(t_list **lst);
int				reverse_rotate(t_list **lst);
int				rotate(t_list **lst);
int				swap(t_list **lst);
int				check_double(int ac, char **av);
int				check_ifnumber(int ac, char **av);
int				check_iflong(int ac, char **av);
int				check_sort(int ac, char **av);
int				check_error(int ac, char **av);
int				stack_a_is_sorted(t_list **stack);
void			sort_three(t_list **stack);
void			sort_all(t_list **stack_a, t_list **stack_b, int nb);
int				count_element(t_list **stack_a);
int				top_number(t_list **stack);
int				sort_two(t_list **stack);
void			sort_four(t_list **stack_a, t_list **stack_b);
void			sort_five(t_list **stack_a, t_list **stack_b);
int				buttom_number(t_list **stack);
int				middle_number(t_list **stack);
int				get_index(int elm, t_list **stack_a);
void			chunks(t_list **stack_a, t_list **stack_b, int size,
					int *array);
int				is_empty(t_list **stack);
void			move_to_top_b(int pos, t_list **stack_b);
void			swap_arr(int *a, int *b);
int				count_element(t_list **stack_a);
void			full_it(int *array, t_list **stack_a);
void			sort_array(int *array, int size);
void			assing_sorted_index(t_list **stack_a, int *array);
void			assing_index(t_list **stack_a);
void			move_to_top(int pos, t_list **stack_a);
int				ft_spl(char *str, char **av);
void			ft_leak(t_list **stack_a, t_list **stack_b);
void			ft_leak_2(char **spl, int i);
char			*ft_read(int fd, char *buffers);
char			*ft_firstline(char *str);
char			*ft_secondline(char *buffers);
char			*get_next_line(int fd);
int				check_args(char **args);
void			ft_joinargs(char **str, char **av);
t_list			**ft_leak_3(char **av);

#endif