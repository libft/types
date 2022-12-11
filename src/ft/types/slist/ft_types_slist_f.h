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

#ifndef FT_TYPES_SLIST_F_H
# define FT_TYPES_SLIST_F_H

# include "ft_types_array_f.h"
# include "ft_types.h"

typedef struct s_ft_types_slist_f_node
{
	struct s_ft_types_slist_f_node	*next;
	t_f								value;
}	t_ft_types_slist_f_node;

typedef struct s_ft_types_slist_f
{
	t_ft_types_slist_f_node	*head;
	t_ft_types_slist_f_node	*tail;
	size_t					length;
}	t_ft_types_slist_f;

void	ft_types_slist_f_init(
			t_ft_types_slist_f *list);
void	ft_types_slist_f_clear(
			t_ft_types_slist_f *list);
t_err	ft_types_slist_f_to_array(
			t_ft_types_slist_f *list,
			t_ft_types_array_f *out);
t_err	ft_types_slist_f_from_array(
			t_ft_types_array_f *array,
			t_ft_types_slist_f *out);
t_err	ft_types_slist_f_push(
			t_ft_types_slist_f *list,
			t_f value);
t_err	ft_types_slist_f_unshift(
			t_ft_types_slist_f *list,
			t_f value);
bool	ft_types_slist_f_shift(
			t_ft_types_slist_f *list,
			t_f *out);

#endif
