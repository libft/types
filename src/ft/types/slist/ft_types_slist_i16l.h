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

#ifndef FT_TYPES_SLIST_I16L_H
# define FT_TYPES_SLIST_I16L_H

# include "ft_types_array_i16l.h"
# include "ft_types_derived.h"

typedef struct s_ft_types_slist_i16l_node
{
	struct s_ft_types_slist_i16l_node	*next;
	t_i16l								value;
}	t_ft_types_slist_i16l_node;

typedef struct s_ft_types_slist_i16l
{
	t_ft_types_slist_i16l_node	*head;
	t_ft_types_slist_i16l_node	*tail;
	size_t						length;
}	t_ft_types_slist_i16l;

void	ft_types_slist_i16l_init(
			t_ft_types_slist_i16l *list);
void	ft_types_slist_i16l_clear(
			t_ft_types_slist_i16l *list);
t_err	ft_types_slist_i16l_to_array(
			t_ft_types_slist_i16l *list,
			t_ft_types_array_i16l *out);
t_err	ft_types_slist_i16l_from_array(
			t_ft_types_array_i16l *array,
			t_ft_types_slist_i16l *out);
t_err	ft_types_slist_i16l_push(
			t_ft_types_slist_i16l *list,
			t_i16l value);
t_err	ft_types_slist_i16l_unshift(
			t_ft_types_slist_i16l *list,
			t_i16l value);
bool	ft_types_slist_i16l_shift(
			t_ft_types_slist_i16l *list,
			t_i16l *out);

#endif
