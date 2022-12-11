/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fake_file_name (file name is useless too)          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 42header-remover <whatever@example.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1970/01/01 00:00:00 by VCS handles       #+#    #+#             */
/*   Updated: 1970/01/01 00:00:00 by file history     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TYPES_SLIST_PI8L_H
# define FT_TYPES_SLIST_PI8L_H

# include "ft_types_array_pi8l.h"
# include "ft_types_derived.h"

typedef struct s_ft_types_slist_pi8l_node
{
	struct s_ft_types_slist_pi8l_node	*next;
	t_pi8l								value;
}	t_ft_types_slist_pi8l_node;

typedef struct s_ft_types_slist_pi8l
{
	t_ft_types_slist_pi8l_node	*head;
	t_ft_types_slist_pi8l_node	*tail;
	size_t						length;
}	t_ft_types_slist_pi8l;

void	ft_types_slist_pi8l_init(
			t_ft_types_slist_pi8l *list);
void	ft_types_slist_pi8l_clear(
			t_ft_types_slist_pi8l *list);
t_err	ft_types_slist_pi8l_to_array(
			t_ft_types_slist_pi8l *list,
			t_ft_types_array_pi8l *out);
t_err	ft_types_slist_pi8l_from_array(
			t_ft_types_array_pi8l *array,
			t_ft_types_slist_pi8l *out);
t_err	ft_types_slist_pi8l_push(
			t_ft_types_slist_pi8l *list,
			t_pi8l value);
t_err	ft_types_slist_pi8l_unshift(
			t_ft_types_slist_pi8l *list,
			t_pi8l value);
bool	ft_types_slist_pi8l_shift(
			t_ft_types_slist_pi8l *list,
			t_pi8l *out);

#endif
