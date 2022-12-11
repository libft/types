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

#ifndef FT_TYPES_SLIST_PF_H
# define FT_TYPES_SLIST_PF_H

# include "ft_types_array_pf.h"
# include "ft_types_derived.h"

typedef struct s_ft_types_slist_pf_node
{
	struct s_ft_types_slist_pf_node	*next;
	t_pf							value;
}	t_ft_types_slist_pf_node;

typedef struct s_ft_types_slist_pf
{
	t_ft_types_slist_pf_node	*head;
	t_ft_types_slist_pf_node	*tail;
	size_t						length;
}	t_ft_types_slist_pf;

void	ft_types_slist_pf_init(
			t_ft_types_slist_pf *list);
void	ft_types_slist_pf_clear(
			t_ft_types_slist_pf *list);
t_err	ft_types_slist_pf_to_array(
			t_ft_types_slist_pf *list,
			t_ft_types_array_pf *out);
t_err	ft_types_slist_pf_from_array(
			t_ft_types_array_pf *array,
			t_ft_types_slist_pf *out);
t_err	ft_types_slist_pf_push(
			t_ft_types_slist_pf *list,
			t_pf value);
t_err	ft_types_slist_pf_unshift(
			t_ft_types_slist_pf *list,
			t_pf value);
bool	ft_types_slist_pf_shift(
			t_ft_types_slist_pf *list,
			t_pf *out);

#endif
