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

#ifndef FT_TYPES_SLIST_I16F_H
# define FT_TYPES_SLIST_I16F_H

# include "ft_types_array_i16f.h"
# include "ft_types_derived.h"

typedef struct s_ft_types_slist_i16f_node
{
	struct s_ft_types_slist_i16f_node	*next;
	t_i16f								value;
}	t_ft_types_slist_i16f_node;

typedef struct s_ft_types_slist_i16f
{
	t_ft_types_slist_i16f_node	*head;
	t_ft_types_slist_i16f_node	*tail;
	size_t						length;
}	t_ft_types_slist_i16f;

void	ft_types_slist_i16f_init(
			t_ft_types_slist_i16f *list);
void	ft_types_slist_i16f_clear(
			t_ft_types_slist_i16f *list);
t_err	ft_types_slist_i16f_to_array(
			t_ft_types_slist_i16f *list,
			t_ft_types_array_i16f *out);
t_err	ft_types_slist_i16f_from_array(
			t_ft_types_array_i16f *array,
			t_ft_types_slist_i16f *out);
t_err	ft_types_slist_i16f_push(
			t_ft_types_slist_i16f *list,
			t_i16f value);
t_err	ft_types_slist_i16f_unshift(
			t_ft_types_slist_i16f *list,
			t_i16f value);
bool	ft_types_slist_i16f_shift(
			t_ft_types_slist_i16f *list,
			t_i16f *out);

#endif
