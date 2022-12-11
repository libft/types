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

#ifndef FT_TYPES_SLIST_I8F_H
# define FT_TYPES_SLIST_I8F_H

# include "ft_types_array_i8f.h"
# include "ft_types_derived.h"

typedef struct s_ft_types_slist_i8f_node
{
	struct s_ft_types_slist_i8f_node	*next;
	t_i8f								value;
}	t_ft_types_slist_i8f_node;

typedef struct s_ft_types_slist_i8f
{
	t_ft_types_slist_i8f_node	*head;
	t_ft_types_slist_i8f_node	*tail;
	size_t						length;
}	t_ft_types_slist_i8f;

void	ft_types_slist_i8f_init(
			t_ft_types_slist_i8f *list);
void	ft_types_slist_i8f_clear(
			t_ft_types_slist_i8f *list);
t_err	ft_types_slist_i8f_to_array(
			t_ft_types_slist_i8f *list,
			t_ft_types_array_i8f *out);
t_err	ft_types_slist_i8f_from_array(
			t_ft_types_array_i8f *array,
			t_ft_types_slist_i8f *out);
t_err	ft_types_slist_i8f_push(
			t_ft_types_slist_i8f *list,
			t_i8f value);
t_err	ft_types_slist_i8f_unshift(
			t_ft_types_slist_i8f *list,
			t_i8f value);
bool	ft_types_slist_i8f_shift(
			t_ft_types_slist_i8f *list,
			t_i8f *out);

#endif
