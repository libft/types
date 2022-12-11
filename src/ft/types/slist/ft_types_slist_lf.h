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

#ifndef FT_TYPES_SLIST_LF_H
# define FT_TYPES_SLIST_LF_H

# include "ft_types_array_lf.h"
# include "ft_types_derived.h"

typedef struct s_ft_types_slist_lf_node
{
	struct s_ft_types_slist_lf_node	*next;
	t_lf							value;
}	t_ft_types_slist_lf_node;

typedef struct s_ft_types_slist_lf
{
	t_ft_types_slist_lf_node	*head;
	t_ft_types_slist_lf_node	*tail;
	size_t						length;
}	t_ft_types_slist_lf;

void	ft_types_slist_lf_init(
			t_ft_types_slist_lf *list);
void	ft_types_slist_lf_clear(
			t_ft_types_slist_lf *list);
t_err	ft_types_slist_lf_to_array(
			t_ft_types_slist_lf *list,
			t_ft_types_array_lf *out);
t_err	ft_types_slist_lf_from_array(
			t_ft_types_array_lf *array,
			t_ft_types_slist_lf *out);
t_err	ft_types_slist_lf_push(
			t_ft_types_slist_lf *list,
			t_lf value);
t_err	ft_types_slist_lf_unshift(
			t_ft_types_slist_lf *list,
			t_lf value);
bool	ft_types_slist_lf_shift(
			t_ft_types_slist_lf *list,
			t_lf *out);

#endif
