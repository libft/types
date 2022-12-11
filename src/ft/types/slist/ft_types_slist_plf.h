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

#ifndef FT_TYPES_SLIST_PLF_H
# define FT_TYPES_SLIST_PLF_H

# include "ft_types_array_plf.h"
# include "ft_types_derived.h"

typedef struct s_ft_types_slist_plf_node
{
	struct s_ft_types_slist_plf_node	*next;
	t_plf								value;
}	t_ft_types_slist_plf_node;

typedef struct s_ft_types_slist_plf
{
	t_ft_types_slist_plf_node	*head;
	t_ft_types_slist_plf_node	*tail;
	size_t						length;
}	t_ft_types_slist_plf;

void	ft_types_slist_plf_init(
			t_ft_types_slist_plf *list);
void	ft_types_slist_plf_clear(
			t_ft_types_slist_plf *list);
t_err	ft_types_slist_plf_to_array(
			t_ft_types_slist_plf *list,
			t_ft_types_array_plf *out);
t_err	ft_types_slist_plf_from_array(
			t_ft_types_array_plf *array,
			t_ft_types_slist_plf *out);
t_err	ft_types_slist_plf_push(
			t_ft_types_slist_plf *list,
			t_plf value);
t_err	ft_types_slist_plf_unshift(
			t_ft_types_slist_plf *list,
			t_plf value);
bool	ft_types_slist_plf_shift(
			t_ft_types_slist_plf *list,
			t_plf *out);

#endif
